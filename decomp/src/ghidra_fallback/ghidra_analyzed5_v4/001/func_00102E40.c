// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00102A8C(void);
extern int func_00102B84(byte param_1);
extern int func_00104338(uint param_1,int param_2);
extern int func_001049BC(void);
extern int func_001053A8(undefined4 *param_1,undefined1 *param_2,int param_3,int *param_4,int *param_5, undefined4 param_6,uint param_7,uint param_8);
extern int func_001058A8(undefined4 param_1,undefined1 *param_2);
extern int func_001058EC(undefined1 param_1);
extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern uint DAT_00102fa0;
extern uint DAT_00102fa4;
extern uint DAT_00102fa8;
extern uint DAT_00102fac;
extern uint *DAT_00102fb0;

// USA 00102E40 <- EU 00102E40 (Ghidra, non-matching)
// GLOBAL DAT_00102fa0 uint
// GLOBAL DAT_00102fa4 uint
// GLOBAL DAT_00102fa8 uint
// GLOBAL DAT_00102fac uint
// GLOBAL DAT_00102fb0 uint *

/* WARNING: Variable defined which should be unmapped: objStack_30 */

uint func_00102E40(undefined1 param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  #define in_stack_ffffffd4 (*(undefined4 *)(albw_frame + 0x4)) /* V4: frame slot (callee-filled) */
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  bVar3 = func_00102A8C();
  if (bVar3) {
    func_00108DF8();
    uVar4 = func_001058A8(0x400,(undefined1 *)objStack_30);
    if ((int)uVar4 < 0) {
      func_0010873C(uVar4,0x102e84);
    }
    func_00108F4C();
    if ((char)objStack_30[0] == '\0') {
      return 0;
    }
  }
  bVar3 = func_001049BC();
  if (bVar3) {
    func_00108DF8();
    uVar4 = func_001058A8(0x200,(undefined1 *)objStack_30);
    if ((int)uVar4 < 0) {
      func_0010873C(uVar4,0x102ec8);
    }
    func_00108F4C();
    if ((char)objStack_30[0] == '\0') {
      return 0;
    }
  }
  func_00102B84(3);
  uVar2 = DAT_00102fa8;
  uVar1 = DAT_00102fa4;
  uVar4 = DAT_00102fa0;
  while( true ) {
    func_00108DF8();
    uVar5 = func_001058EC(param_1);
    func_00108F4C();
    if ((uVar5 != uVar4 && uVar5 != uVar1) && uVar5 != uVar2) break;
    func_00104338((uint)((ulonglong)DAT_00102fac * 10),(int)((ulonglong)DAT_00102fac * 10 >> 0x20));
  }
  if (uVar5 == 0) {
    objStack_30[0] = 0;
    iVar6 = func_001053A8((undefined4 *)0x0,(undefined1 *)0x0,0,(int *)0x0,(int *)0x0,
                          in_stack_ffffffd4,*DAT_00102fb0,DAT_00102fb0[1]);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = (char)iVar6;
    }
  }
  return uVar5;
}

