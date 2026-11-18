#include "ghidra_types.h"

extern int func_004134E4(int *param_1,int *param_2,int param_3);
extern int func_00413D54(int *param_1,uint param_2,int param_3,int *param_4);
extern int func_0041DD74(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
extern int func_0041DDF4(int param_1,undefined1 param_2,undefined4 param_3,int *param_4);
extern int func_0041DEEC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined1 param_5 );
extern int func_00569D88(int *param_1,undefined4 param_2);
extern int func_0056C9A4(int *param_1,uint param_2);
extern int func_0056CAD4(int param_1,uint param_2);
extern undefined4 DAT_0040a7c0;
extern undefined4 DAT_0040a7c4;
extern undefined4 DAT_0040a7c8;

// USA 0040A588 <- EU 0040A568 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 int *
// GLOBAL DAT_0040a7c0 undefined4
// GLOBAL DAT_0040a7c4 undefined4
// GLOBAL DAT_0040a7c8 undefined4

/* WARNING: Variable defined which should be unmapped: objStack_78 */

undefined4
func_0040A588(int param_1,int param_2,undefined4 *param_3,uint *param_4,int param_5,
             undefined4 param_6,int *param_7)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define objStack_78 ((uint *)(albw_frame + 0x8))
  #define puStack_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define puStack_6c (*(uint * *)(albw_frame + 0x14))
  #define local_58 (*(int *)(albw_frame + 0x28))
  #define local_50 (*(undefined4 *)(albw_frame + 0x30))
  #define piStack_4c (*(int * *)(albw_frame + 0x34))
  #define local_48 (*(uint *)(albw_frame + 0x38))
  #define local_44 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x40))
  #define local_3c (*(uint *)(albw_frame + 0x44))
  #define iStack_34 (*(int *)(albw_frame + 0x4c))
  #define iStack_30 (*(int *)(albw_frame + 0x50))
  #define local_2c (*(undefined4 * *)(albw_frame + 0x54))
  #define puStack_28 (*(uint * *)(albw_frame + 0x58))
  bVar1 = false;
  iVar5 = 0;
  local_3c = (uint)(*(int *)(*(int *)(param_2 + 0x10) + 0x38) != 0);
  local_50 = 0xffffffff;
  piStack_4c = (int *)0x0;
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  puStack_28 = param_4;
  if ((*(int *)(param_1 + 0x114) == 0) ||
     (local_58 = func_0056CAD4(*(int *)(param_1 + 4),*(undefined4 *)(param_2 + 0xac)), local_58 == 0
     )) {
LAB_0040a678:
    piVar2 = (int *)func_00569D88(*(int **)(param_1 + 0x110),*local_2c);
  }
  else {
    piVar2 = *(int **)(param_1 + 0x114);
    if ((char)piVar2[1] == '\0') {
      piVar2 = (int *)0x0;
    }
    else {
      objStack_78[0] = 0;
      piVar2 = (int *)(**(code **)(*piVar2 + 0x10))(piVar2,local_58,DAT_0040a7c0,DAT_0040a7c4);
    }
    piVar3 = *(int **)(param_1 + 0x114);
    if ((char)piVar3[1] == '\0') {
      piVar3 = (int *)0x0;
    }
    else {
      objStack_78[0] = 0;
      piVar3 = (int *)(**(code **)(*piVar3 + 0x10))(piVar3,local_58,DAT_0040a7c0);
    }
    if (piVar2 == (int *)0x0 || piVar3 == (int *)0x0) goto LAB_0040a678;
    func_004134E4((int *)&puStack_70,piVar3,0);
    iVar5 = func_0056C9A4((int *)&puStack_70,*param_4);
    if (iVar5 == 0) goto LAB_0040a678;
  }
  local_50 = *(undefined4 *)(param_2 + 0xac);
  piStack_4c = piVar2;
  if (piVar2 == (int *)0x0) {
    if (local_3c == 0) {
      return 7;
    }
  }
  else {
    if (iVar5 != 0) goto LAB_0040a70c;
    if (param_7 == (int *)0x0) {
      if (*(int *)(param_1 + 0x110) == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(*(int *)(param_1 + 0x110) + 0xc);
      }
      iVar5 = func_00413D54(piVar2,*param_4,*(int *)(param_1 + 4),piVar3);
    }
    else {
      iVar5 = *param_7;
    }
    if (iVar5 != 0) goto LAB_0040a70c;
    if (local_3c == 0) {
      return 8;
    }
  }
  bVar1 = true;
LAB_0040a70c:
  if (param_5 == 0) {
    local_44 = 1;
  }
  else if ((param_5 == 1) || (param_5 != 2)) {
    local_44 = 0;
    param_6 = 0;
  }
  else {
    local_44 = 0;
  }
  local_48 = *param_4;
  local_40 = param_6;
  if (bVar1) {
    objStack_78[0] = *(uint *)(param_1 + 4);
    puVar4 = *(uint **)(param_2 + 0x10);
    objStack_78[1] = *(uint *)(param_1 + 0x110);
    puStack_70 = &local_50;
    puStack_6c = puVar4;
    func_0041DD74(param_2,objStack_78,&local_48,(int *)puVar4);
  }
  else {
    objStack_78[0] = 0;
    if (param_7 != (int *)0x0) {
      objStack_78[0] = (uint)*(char *)((int)param_7 + 9);
    }
    puVar4 = &local_48;
    func_0041DEEC(param_2,piVar2,iVar5,(int *)puVar4,(undefined1)objStack_78[0]);
  }
  func_0041DDF4(param_2,(char)param_4[2],(int)*(char *)((int)param_4 + 9),(int *)puVar4);
  return 0;
}

