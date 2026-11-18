#include "ghidra_types.h"

extern int func_00102A2C(int param_1);
extern int func_00102A4C(void);
extern int func_00102A8C(void);
extern int func_00102B84(byte param_1);
extern int func_00102C00(void *param_1);
extern int func_00102C10(void);
extern int func_00102C24(void);
extern int func_00102C30(byte param_1);
extern int func_00102DF8(void *param_1);
extern int func_001030F0(undefined4 param_1);
extern int func_001053A8(undefined4 *param_1,undefined1 *param_2,int param_3,int *param_4,int *param_5, undefined4 param_6,uint param_7,uint param_8);
extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern uint *DAT_00101bc4;

// USA 00101B1C <- EU 00101B1C (Ghidra, non-matching)
// GLOBAL DAT_00101bc4 uint *

void func_00101B1C(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20]; /* entry_sp - 0x20 .. entry_sp + 0x0 */
#define stack0xffffffe4 (*(undefined4 *)(albw_frame + 0x4))
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  #define in_stack_ffffffe4 (*(undefined4 *)(albw_frame + 0x4)) /* V4: frame slot (callee-filled) */
  #define local_10 ((int *)(albw_frame + 0x10))
  if (param_1 != 0) {
    func_00102A2C(0);
  }
  func_00108DF8();
  uVar2 = func_00102A4C();
  uVar3 = func_001030F0(uVar2);
  if ((int)uVar3 < 0) {
    func_0010873C(uVar3,0x101b44);
  }
  func_00108F4C();
  bVar1 = func_00102A8C();
  if ((bVar1) && (uVar3 = func_00102A4C(), (uVar3 & 0x20) == 0)) {
    func_00102B84(0x62);
    puVar4 = (undefined1 *)func_00102C24();
    iVar5 = func_001053A8((undefined4 *)&stack0xffffffe4,puVar4,0x1000,local_10,(int *)0x0,
                          in_stack_ffffffe4,*DAT_00101bc4,DAT_00101bc4[1]);
    func_00102DF8(in_stack_ffffffe4);
    func_00102C00(local_10[0]);
    func_00102C10();
    func_00102C30((char)iVar5);
  }
  return;
}

