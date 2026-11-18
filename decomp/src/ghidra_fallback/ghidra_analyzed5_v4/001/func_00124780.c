#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_0058A204(int param_1,int param_2);
extern int func_0065650C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00124a34;
extern float DAT_00124a38;
extern undefined DAT_00124a3c;
extern char s__Trancform_00124a3f[];
extern char s_cf_00124a3f[];
extern undefined4 _DAT_00124a3c;

// USA 00124780 <- EU 00124780 (Ghidra, non-matching)
// GLOBAL DAT_00124a34 undefined4
// GLOBAL DAT_00124a38 float
// GLOBAL DAT_00124a3c undefined
// GLOBAL s_cf_00124a3f string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint func_00124780(int param_1,uint param_2,int param_3)

{
  _Alignas(8) unsigned char albw_frame[0x30]; /* entry_sp - 0x30 .. entry_sp + 0x0 */
#define stack0xffffffd0 (*(undefined4 *)(albw_frame + 0x0))
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  #define in_stack_ffffffd0 (*(int *)(albw_frame + 0x0)) /* V4: frame slot (callee-filled) */
  #define in_stack_ffffffd4 (*(undefined4 *)(albw_frame + 0x4)) /* V4: frame slot (callee-filled) */
  
  uVar5 = (param_2 & 0xff) - 0xe;
  if (*(short *)(param_1 + 0x508) < 1) {
    uVar2 = param_2 & 0xff;
    bVar6 = 0x1d < uVar2;
    if (uVar2 != 0x1e) {
      bVar6 = 2 < uVar5;
    }
    if (!bVar6 || (uVar2 == 0x1e || uVar5 == 3)) {
      iVar3 = func_0058A204(param_3,0);
      if (iVar3 == 0) {
        in_stack_ffffffd0 = 0x21;
        in_stack_ffffffd4 = 0;
        func_004FBA18(param_1,3,4,-1,0x21,0,(ushort)DAT_00124a34,ALBW_AS_F32(_DAT_00124a3c),DAT_00124a38);
      }
      else {
        in_stack_ffffffd0 = 0x21;
        in_stack_ffffffd4 = 1;
        func_004FBA18(param_1,5,6,-1,0x21,1,(ushort)DAT_00124a34,ALBW_AS_F32(_DAT_00124a3c),DAT_00124a38);
      }
      if (0 < *(short *)(param_1 + 0x508)) goto LAB_00124840;
    }
    if (param_2 != 0x15) {
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffff7fff;
      return param_2;
    }
  }
LAB_00124840:
  cVar1 = *(char *)(param_3 + 0x24);
  if (cVar1 == '\r') {
    func_004FABDC(param_1,2,0xffffffff,0);
    func_0065650C((undefined4 *)(param_1 + 0x8bc),6);
    if (*(int *)(param_1 + 0x344) == 0) goto LAB_001248d4;
    iVar3 = *(int *)(param_1 + 0x950);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x1c) != *(int *)(param_1 + 0x954))) goto LAB_001248b8;
  }
  else {
    if ((cVar1 == '\x01') || ((cVar1 == '\x03' && (*(char *)(param_3 + 0x25) == '\x01')))) {
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff5b;
      if (*(char *)(param_1 + 0x95a) == '\0') {
        piVar4 = (int *)(param_1 + 0x950);
        if (*(int *)(param_1 + 0x344) == 0) {
          *piVar4 = 0;
          *(undefined4 *)(param_1 + 0x954) = 0;
        }
        else {
          iVar3 = *piVar4;
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0x954))) {
            func_00110848(iVar3);
          }
          func_004A1B9C((int *)&stack0xffffffd0,*(int *)(param_1 + 0x344),
                        (uint *)(s__Trancform_00124a3f + 1));
          *piVar4 = in_stack_ffffffd0;
          *(undefined4 *)(param_1 + 0x954) = in_stack_ffffffd4;
        }
      }
      *(undefined1 *)(param_1 + 0x95a) = 1;
      return 0x10;
    }
    if ((param_2 == 1) &&
       (*(char *)(param_1 + 0x8c0) == '\x06' || *(char *)(param_1 + 0x8c0) == '\a')) {
      return 0;
    }
    if (*(char *)(param_3 + 0x25) != '\x01') {
      uVar2 = param_2 & 0xff;
      bVar6 = 0x1d < uVar2;
      if (uVar2 != 0x1e) {
        bVar6 = 2 < uVar5;
      }
      if ((bVar6 && (uVar2 != 0x1e && uVar5 != 3)) || (*(short *)(param_1 + 0x508) < 1)) {
        if (param_2 == 3) {
          return 0;
        }
      }
      else {
        param_2 = 0xe;
      }
      return param_2;
    }
    func_004FABDC(param_1,2,0xffffffff,0);
    func_0065650C((undefined4 *)(param_1 + 0x8bc),6);
    if (*(int *)(param_1 + 0x344) == 0) {
LAB_001248d4:
      *(undefined4 *)(param_1 + 0x950) = 0;
      *(undefined4 *)(param_1 + 0x954) = 0;
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0x950);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x1c) != *(int *)(param_1 + 0x954))) goto LAB_001248b8;
  }
  func_00110848(iVar3);
LAB_001248b8:
  func_004A1B9C((int *)&stack0xffffffd0,*(int *)(param_1 + 0x344),
                (uint *)(s__Trancform_00124a3f + 1));
  *(int *)(param_1 + 0x950) = in_stack_ffffffd0;
  *(undefined4 *)(param_1 + 0x954) = in_stack_ffffffd4;
  return 0;
}

