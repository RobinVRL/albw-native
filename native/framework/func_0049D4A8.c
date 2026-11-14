/* USA 0049D4A8 (EU 0049D480): sead::TaskMgr::createTaskSync(const TaskBase::CreateArg &arg)
 *   (boot path: 0048E718 creates the prepare task with it; 4 callers)
 *   int f(TaskMgr *this, CreateArg *arg);   returns the task
 *   lock(this + 4);
 *   HeapArray ha (6 words at sp+0x18; ha.+0x10 = ha.+0x14 = 0 first); 0049CEC8(this, &ha, arg);
 *   task = 0049D3D8(this, arg, &ha) (createTask_);
 *   n = *data_0079E048: for i < n: if (task->+0x44[i]) task->+0x44[i]->+0x14 = task->+0x28;
 *   if (arg->+0x7C) arg->+0x7C(task) (create callback);  u8 task->+0x60 = 1;
 *   h = ha[ha.+0x14]; prev = h ? 0010983C(*data_00715210, h) : 1  (setCurrentHeap);
 *   task->vt[0x28](task) (prepare); if (prev != 1) 0010983C(*data_00715210, prev);
 *   for (i = 0; i < *data_0079E048 (re-read); i++) { s = arg + 8 + (i < n' ? i * 0x14 : 0)
 *       (n' = the count re-read); if (u8 s->+0x10) 0049F9C8(task, i, s->+0xC); }
 *   0049DA04(this, task, 2); 0049DA04(this, task, 4);
 *   if ((o = arg->+0x70) != 0) {           (one-shot "created" delegate list on the stack)
 *       sead::OffsetList L at sp+8 = { vtbl data_006F550C, head {prev, next} = &head, count 0 };
 *       node = o + 0x10 {prev, next, owner +8, list +0xC}; flag u8 o->+0x38;
 *       if (o->+0x38) { unlink(node); o->+0x38 = 0; }   unlink(node);
 *       node->list = &L.head; insert(&L.head, node); L.count++; o->+0x38 = 1;
 *       for (n = L.head.next; n != &L.head; n = next) { next = n->+4;
 *           d = n->owner->+0x20; if (d) d->vt[0](d, task); }
 *       L.vtbl = data_006F550C (dtor); for each node: o = n->owner; next first;
 *           if (o->+0x38) { unlink(o + 0x10); o->+0x38 = 0; } }
 *   if (arg->+0x6C) *arg->+0x6C = task;  unlock(this + 4);  return task.
 *   unlink(n): if ((l = n->+0xC) != 0) { n->+0xC = 0; ListNode::erase_(n); l->+8 -= 1; }
 * Round-2 converted C: logic right; it threads an uninitialised `in_s0` through 0010F1F8 (declared
 * float by the signature table; native/core makes it void: with that core definition linked,
 * the converted version pops an empty x87 st(0) on i386 at each unlink). List erase / insert are
 * inline here (framework.h). The OffsetList vtable word the ARM writes is written too (the
 * converted C did not; nothing reads it). The node's list pointer is a 32-bit word pointing at
 * this native stack frame (low game-thread stacks, native/64BIT.md).
 * Prototype = callers' `int func_0049D4A8(int, undefined4 *)`. Verified against EU
 * 0049D480-0049D73C. Confidence: high. */
#include "framework.h"

extern int32_t data_0079E048;
extern uint32_t data_00715210;  /* sead::HeapMgr instance */
extern uint32_t data_006F550C[]; /* sead::OffsetList vtable */
int func_0010C0B8(void *cs);
int func_0010EEE0(void *cs);
int func_0049CEC8(void *mgr, void *ha, void *arg);
uint32_t func_0049D3D8(uint32_t mgr, void *arg, uint32_t ha);
uint32_t func_0010983C(void *heap_mgr, void *heap);
int func_0049F9C8(void *task, uint32_t i, uint32_t p);
int func_0049DA04(uint32_t mgr, int *task, uint32_t state);

typedef uint32_t (*vfn_task)(void *self, void *task);
typedef uint32_t (*fn_cb)(void *task);

static void unlink_node(char *n) {
    uint32_t l = FLD(n, 0xC, uint32_t);
    if (l != 0) {
        FLD(n, 0xC, uint32_t) = 0;
        fw_list_erase(n);
        FLD(gp_ptr(l), 8, int32_t) -= 1;
    }
}

int func_0049D4A8(uint32_t self_w, uint32_t *arg_p) {
    char *self = gp_ptr(self_w);
    char *arg = (char *)arg_p;
    uint32_t ha[6];
    func_0010C0B8(self + 4);
    ha[5] = 0;
    ha[4] = 0;
    func_0049CEC8(self, ha, arg);
    uint32_t tw = func_0049D3D8(self_w, arg, GPTR_OF(ha));
    char *task = gp_ptr(tw);
    int32_t n = data_0079E048;
    for (int32_t i = 0; i < n; i++) {
        uint32_t m = FLD(task, 0x44 + i * 4, uint32_t);
        if (m != 0)
            FLD(gp_ptr(m), 0x14, uint32_t) = FLD(task, 0x28, uint32_t);
    }
    if (FLD(arg, 0x7C, uint32_t) != 0)
        GFN(fn_cb, FLD(arg, 0x7C, uint32_t))(task);
    FLD(task, 0x60, uint8_t) = 1;
    uint32_t h = ha[ha[5]];
    uint32_t prev = 1;
    if (h != 0)
        prev = func_0010983C(gp_ptr(data_00715210), gp_ptr(h));
    fw_vcall0(task, 0x28);
    if (prev != 1)
        func_0010983C(gp_ptr(data_00715210), gp_ptr(prev));
    int32_t cnt = data_0079E048; /* read once per iteration, as the ARM (bottom-tested loop) */
    for (int32_t i = 0; cnt > i;) {
        char *s = arg + 8;
        if ((uint32_t)cnt > (uint32_t)i)
            s += i * 0x14;
        if (FLD(s, 0x10, uint8_t) != 0)
            func_0049F9C8(task, (uint32_t)i, FLD(s, 0xC, uint32_t));
        cnt = data_0079E048;
        i++;
    }
    func_0049DA04(self_w, (int *)task, 2);
    func_0049DA04(self_w, (int *)task, 4);
    uint32_t ow = FLD(arg, 0x70, uint32_t);
    if (ow != 0) {
        uint32_t L[4]; /* sp+8: vtbl, head.prev, head.next, count */
        uint32_t vt = GPTR_OF(ALBW_LAUNDER(data_006F550C));
        char *head = (char *)&L[1];
        L[0] = vt;
        L[1] = gp_u32(head);
        L[2] = gp_u32(head);
        L[3] = 0;
        char *o = gp_ptr(ow);
        if (FLD(o, 0x38, uint8_t) != 0) {
            unlink_node(o + 0x10);
            FLD(o, 0x38, uint8_t) = 0;
        }
        unlink_node(o + 0x10);
        FLD(o, 0x1C, uint32_t) = gp_u32(head);
        fw_list_insert(head, o + 0x10);
        L[3] += 1;
        FLD(o, 0x38, uint8_t) = 1;
        for (uint32_t nd = L[2]; nd != gp_u32(head);) {
            uint32_t next = FLD(gp_ptr(nd), 4, uint32_t);
            uint32_t d = FLD(GPTR(gp_ptr(nd), 8, char), 0x20, uint32_t);
            if (d != 0)
                GFN(vfn_task, fw_vslot(gp_ptr(d), 0))(gp_ptr(d), task);
            nd = next;
        }
        L[0] = vt;
        for (uint32_t nd = L[2]; nd != gp_u32(head);) {
            char *ob = GPTR(gp_ptr(nd), 8, char);
            nd = FLD(gp_ptr(nd), 4, uint32_t);
            if (FLD(ob, 0x38, uint8_t) != 0) {
                unlink_node(ob + 0x10);
                FLD(ob, 0x38, uint8_t) = 0;
            }
        }
    }
    uint32_t out = FLD(arg, 0x6C, uint32_t);
    if (out != 0)
        FLD(gp_ptr(out), 0, uint32_t) = tw;
    func_0010EEE0(self + 4);
    return (int)tw;
}
