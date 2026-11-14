/* OpenGL upload of decoded PICA textures (needs native/platform/gl.h function pointers). */
#include "texture.h"
#include "../platform/gl.h"
#include <stdlib.h>

/* ---- GL upload ---- */
#define GL_TEXTURE_MAX_LEVEL_ 0x813D
#define GL_TEXTURE_LOD_BIAS_ 0x8501
#define GL_REPEAT_ 0x2901
#define GL_MIRRORED_REPEAT_ 0x8370
#define GL_CLAMP_TO_BORDER_ 0x812D
#define GL_NEAREST_MIPMAP_NEAREST_ 0x2700
#define GL_LINEAR_MIPMAP_NEAREST_ 0x2701
#define GL_NEAREST_MIPMAP_LINEAR_ 0x2702
#define GL_LINEAR_MIPMAP_LINEAR_ 0x2703

static GLint gl_wrap(int w) {
    switch (w) {
    case 0: return GL_CLAMP_TO_EDGE;
    case 1: return GL_CLAMP_TO_BORDER_;  /* border colour needs glTexParameterfv (not loaded) */
    case 3: return GL_MIRRORED_REPEAT_;
    default: return GL_REPEAT_;
    }
}

unsigned pica_tex_upload_gl(const uint8_t *src, size_t n, int fmt, int w, int h, int levels,
                            const PicaSampler *s) {
    if (levels < 1) levels = 1;
    uint8_t *buf = malloc((size_t)w * h * 4);
    if (!buf) return 0;
    GLuint tex;
    glGenTextures(1, &tex);
    glBindTexture(GL_TEXTURE_2D, tex);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    int lv = 0;
    size_t off = 0;
    for (; lv < levels && w >= 8 && h >= 8; lv++, w >>= 1, h >>= 1) {
        size_t sz = pica_tex_size(fmt, w, h);
        if (off + sz > n || pica_tex_decode(src + off, n - off, fmt, w, h, buf, 1)) break;
        glTexImage2D(GL_TEXTURE_2D, lv, GL_RGBA8, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, buf);
        off += sz;
    }
    free(buf);
    if (lv == 0) {
        glDeleteTextures(1, &tex);
        return 0;
    }
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL_, lv - 1);
    PicaSampler def = {2, 2, 1, 3, 0.f, 0};
    if (!s) s = &def;
    static const GLint minf[6] = {GL_NEAREST, GL_NEAREST_MIPMAP_NEAREST_, GL_NEAREST_MIPMAP_LINEAR_,
                                  GL_LINEAR, GL_LINEAR_MIPMAP_NEAREST_, GL_LINEAR_MIPMAP_LINEAR_};
    GLint mf = minf[s->min_filter < 6 ? s->min_filter : 3];
    if (lv == 1) mf = (mf == GL_NEAREST || mf == GL_NEAREST_MIPMAP_NEAREST_ || mf == GL_NEAREST_MIPMAP_LINEAR_)
                          ? GL_NEAREST : GL_LINEAR;
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, mf);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, s->mag_linear ? GL_LINEAR : GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, gl_wrap(s->wrap_s));
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, gl_wrap(s->wrap_t));
    return tex;
}
