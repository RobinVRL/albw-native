/* USA 0010DC6C (EU 0010DC6C): nn::fs RomFS "required work memory" query
 * (behind GetRomRequiredMemorySize; caller 0010D0F4(maxFile, maxDir, useCache) passes a
 * zeroed 12-byte binary file path = the RomFS of the running title).
 *
 * Opens the RomFS file with OpenFileDirectly (0010F7EC, native in sdk/fs.c), takes a file
 * object {vtable 006EFAFC, handle} from the pool at 0079CE10 (0010FB48), and when useCache is
 * set reads the 0x28-byte RomFS level-3 header and adds the four metadata table sizes
 * (dir hash, dir meta, file hash, file meta) to maxFile*0x20 + maxDir*0x18.  The file object
 * is then closed through its vtable +0x30 (003C9058).
 *
 * Rewritten from the EU disassembly: the Ghidra version passed 6 of the 12 OpenFileDirectly
 * arguments (the stack arguments were folded into locals) and read the header fields from
 * the wrong stack slots, so the size came out <= 0 and the error path (svc 0x23) was taken.
 * Error paths: the 3DS does svc CloseHandle(h) + fatal 0xF96047A2; natively the handle is closed
 * with the fs Close replacement (003C9ADC), then the same fatal.
 * Layout note: the pool element is 8 bytes {u32 vtable, u32 handle} (32-bit layout, as in
 * the rest of the fs object code).  Confidence: high. */
#include <stdint.h>

typedef struct RomFsFile RomFsFile;
typedef int32_t (*RomFsReadFn)(RomFsFile *self, int32_t *out_read, uint32_t off_lo,
                               uint32_t off_hi, void *buf, uint32_t size);
typedef void (*RomFsCloseFn)(RomFsFile *self);
struct RomFsFile {
    void *const *vtbl;
    uint32_t handle;
};

extern uint32_t data_00714998[];       /* fs session state; +0x10 = fs:USER session handle */
extern uint32_t data_0079CE10[];       /* file-object pool */
extern void *const data_006EFAFC[];    /* RomFS file object vtable */

int32_t func_0010F7EC(const uint32_t *session, uint32_t *out_handle, uint32_t transaction,
                      uint32_t archive_id, uint32_t arch_path_type, const void *arch_path,
                      uint32_t arch_path_size, uint32_t file_path_type, const void *file_path,
                      uint32_t file_path_size, uint32_t open_flags, uint32_t attributes);
void *func_0010FB48(void *pool);
void func_0010AC24(uint32_t result, uint32_t pc);
int32_t func_003C9ADC(const uint32_t *handle);   /* fs: file Close (native, sdk/fs.c) */

int32_t func_0010DC6C(uint32_t max_file, uint32_t max_dir, uint32_t use_cache, const void *path)
{
    uint32_t session = data_00714998[4];
    uint32_t handle = 0;
    uint32_t empty_path = 0;            /* archive path: type 1 (empty), size 1 */
    int32_t r = func_0010F7EC(&session, &handle, 0, 3 /* SelfNCCH */, 1, &empty_path, 1,
                              2 /* binary */, path, 0xC, 1 /* read */, 0);
    if (r < 0)
        func_0010AC24((uint32_t)r, 0x0010DCDC);

    RomFsFile *file = (RomFsFile *)func_0010FB48(data_0079CE10);
    if (file == 0) {
        func_003C9ADC(&handle);
        func_0010AC24(0xF96047A2u, 0x0010DD6C);
        return -1;                       /* not reached: fatal */
    }
    file->vtbl = data_006EFAFC;
    file->handle = handle;

    int32_t size;
    int32_t tables = 0;
    if (use_cache) {
        uint32_t header[10];             /* RomFS level-3 header, 0x28 bytes */
        int32_t got = 0;
        int32_t rr = ((RomFsReadFn)file->vtbl[0])(file, &got, 0, 0, header, 0x28);
        size = -1;
        if (rr >= 0 && got == 0x28) {
            /* header[2]=dir hash size, [4]=dir meta size, [6]=file hash size, [8]=file meta size */
            tables = (int32_t)(header[2] + header[4] + header[6] + header[8]);
            size = tables < 0 ? 0 : (int32_t)(max_file * 0x20 + max_dir * 0x18) + tables;
        }
    } else {
        size = (int32_t)(max_file * 0x20 + max_dir * 0x18);
    }
    if (size <= 0) {
        func_003C9ADC(&handle);
        func_0010AC24(0xF96047A2u, 0x0010DDC4);
    }
    ((RomFsCloseFn)file->vtbl[12])(file);
    return size;
}
