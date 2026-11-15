/* USA 0041E6F0 (EU 0041E6D0): nw::font::CharWriter::InitDispStringBuffer(drawBuffer, cmdBuffer,
 * cmdSize, charCount) -> DispStringBuffer*: NULL if no draw buffer, else the tail call
 * 00420500(drawBuffer, charCount, cmdBuffer, cmdSize). Native fix of the matched source
 * (src/work7/ds5/func_0041E6F0.cpp), which was typed void and dropped the buffer the tail call
 * returns in r0: the text box stored garbage and RectDrawer::BuildTextCommand (0041E948) wrote
 * through it. Confidence: high. */
#include <stdint.h>

void func_00420500(void *buf, uint32_t count, void *cmd, uint32_t cmd_size);  /* returns buf in r0 (EU 00420530 writeback); converted as void */

void *func_0041E6F0(void *buf, void *cmd, uint32_t cmd_size, uint32_t count)
{
    if (!buf)
        return 0;
    func_00420500(buf, count, cmd, cmd_size);
    return buf;
}
