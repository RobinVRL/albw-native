/* USA 0049DA04 (EU 0049D9DC): sead::TaskMgr::changeTaskState_(TaskBase *task, u8 state)
 *   (createTaskSync 0049D4A8 (2, 4), the async path (1), destroy paths (5, 6, 7))
 *   int f(TaskMgr *this, TaskBase *task, u32 state);   returns 1 = changed, 0 = refused
 *   lock(this + 4);  cur = u8 task->+0x60;  if (cur == state || state >= 8) -> refuse;
 *   jump table EU 0049DA14 (read from the ROM): 0, 3 -> refuse;
 *   1: if (cur != 0) refuse; cur = 1; 0049D0D8(this, this + 0x2C, task) (prepare list append);
 *      t = this->+0x24 (prepare thread); if (t && !t->vt[0xC](t, 1, 1)) refuse (state stays 1);
 *   2: cur = 2; unlink(task + 0x34);
 *   4: cur = 4; unlink(task + 0x34); 0049D0D8(this, this + 0x44, task) (active list);
 *      if (*data_007153D0) 0048B7E4(*data_007153D0); task->vt[0x2C](task) (enterCommon);
 *   5: cur = 5;
 *   6: if (cur != 4) refuse; cur = 6; task->vt[0x44](task); task->vt[0x48](task);
 *      0049D0D8(this, this + 0x68, task) (destroyable list);
 *   7: task->vt[0x34](task); cur = 7; unlink(task + 0x34);
 *   unlock(this + 4); return 1.   refuse: unlock; return 0.
 *   unlink(n): if ((l = n->+0xC) != 0) { n->+0xC = 0; ListNode::erase_(n); l->+8 -= 1; }
 * What was wrong in the round-2 converted C: case 1 calls t->vt[0xC](t, 1) without the third
 * argument: the ARM passes r1 = r2 = 1 (`mov r2,#1; mov r1,r2`: sead::Thread::sendMessage(msg 1,
 * BlockType 1 = blocking)), so the converted callee read a garbage block type. Also the
 * ListNode erase calls threaded an uninitialised `in_s0` through 0010F1F8 (s0 pass-through
 * modelling): done inline here (framework.h fw_list_erase).
 * Prototype = callers' `int func_0049DA04(int, int *, uint)`. Verified against EU
 * 0049D9DC-0049DBAC. Confidence: high (thread-message reading of vt[0xC]: medium). */
#include "framework.h"

extern uint32_t data_007153D0;
int func_0010C0B8(void *cs);
int func_0010EEE0(void *cs);
int func_0049D0D8(void *mgr, void *list, void *task);
int func_0048B7E4(void *p);

typedef uint32_t (*vfn_msg)(void *self, uint32_t msg, uint32_t block);

static void unlink_node(char *n) {
    uint32_t l = FLD(n, 0xC, uint32_t);
    if (l != 0) {
        FLD(n, 0xC, uint32_t) = 0;
        fw_list_erase(n);
        FLD(gp_ptr(l), 8, int32_t) -= 1;
    }
}

int func_0049DA04(uint32_t self_w, int *task_p, uint32_t state) {
    char *self = gp_ptr(self_w);
    char *task = (char *)task_p;
    func_0010C0B8(self + 4);
    uint32_t cur = FLD(task, 0x60, uint8_t);
    if (cur == state || state >= 8)
        goto refuse;
    switch (state) {
    case 1: {
        if (cur != 0)
            goto refuse;
        FLD(task, 0x60, uint8_t) = 1;
        func_0049D0D8(self, self + 0x2C, task);
        char *t = GPTR(self, 0x24, char);
        if (t != NULL && GFN(vfn_msg, fw_vslot(t, 0xC))(t, 1, 1) == 0)
            goto refuse;
        break;
    }
    case 2:
        FLD(task, 0x60, uint8_t) = 2;
        unlink_node(task + 0x34);
        break;
    case 4:
        FLD(task, 0x60, uint8_t) = 4;
        unlink_node(task + 0x34);
        func_0049D0D8(self, self + 0x44, task);
        if (data_007153D0 != 0)
            func_0048B7E4(gp_ptr(data_007153D0));
        fw_vcall0(task, 0x2C);
        break;
    case 5:
        FLD(task, 0x60, uint8_t) = 5;
        break;
    case 6:
        if (cur != 4)
            goto refuse;
        FLD(task, 0x60, uint8_t) = 6;
        fw_vcall0(task, 0x44);
        fw_vcall0(task, 0x48);
        func_0049D0D8(self, self + 0x68, task);
        break;
    case 7:
        fw_vcall0(task, 0x34);
        FLD(task, 0x60, uint8_t) = 7;
        unlink_node(task + 0x34);
        break;
    default: /* 0, 3 */
        goto refuse;
    }
    func_0010EEE0(self + 4);
    return 1;
refuse:
    func_0010EEE0(self + 4);
    return 0;
}
