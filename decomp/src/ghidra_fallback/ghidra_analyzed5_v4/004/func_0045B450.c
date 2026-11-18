#include "ghidra_types.h"

extern int func_0023248C(int param_1,int *param_2,undefined4 param_3);
extern int func_005229AC(int *param_1,int *param_2);
extern float func_00568B68(int param_1);
extern int *DAT_0045b5ec;
extern int DAT_0045b600;
extern int *DAT_0045b604;
extern float DAT_0045b608;
extern float DAT_0045b60c;
extern int DAT_0045b610;
extern int *DAT_0045b614;
extern char s_W_HeadLine_00_0045b5f0[];

// USA 0045B450 <- EU 0045B428 (Ghidra, non-matching)
// GLOBAL DAT_0045b5ec int *
// GLOBAL DAT_0045b600 int
// GLOBAL DAT_0045b604 int *
// GLOBAL DAT_0045b608 float
// GLOBAL DAT_0045b60c float
// GLOBAL DAT_0045b610 int
// GLOBAL DAT_0045b614 int *
// GLOBAL s_W_HeadLine_00_0045b5f0 string

void func_0045B450(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  int in_s1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar5 = DAT_0045b5ec;
  if (*(undefined4 **)(param_1 + 0x1c) == (undefined4 *)0x0) {
    return;
  }
  puVar4 = (undefined4 *)**(undefined4 **)(param_1 + 0x1c);
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  piVar1 = (int *)(**(code **)*puVar4)(puVar4);
  while (piVar1 != piVar5) {
    piVar1 = (int *)*piVar1;
    if (piVar1 == (int *)0x0) {
      return;
    }
  }
  if (puVar4 == (undefined4 *)0x0 || param_2 == (int *)0x0) {
    return;
  }
  local_24 = s_W_HeadLine_00_0045b5f0;
  local_28 = DAT_0045b600;
  piVar1 = (int *)func_005229AC(*(int **)(param_1 + 0x1c),&local_28);
  piVar5 = DAT_0045b604;
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (piVar2 == piVar5) goto LAB_0045b4d0;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_0045b4d0:
  if ((piVar1 != (int *)0x0) &&
     (((*(char *)((int)piVar1 + 0x46) == '\0' ||
       (((fVar7 = func_00568B68((int)piVar1), (uint)ALBW_AS_U32(fVar7) <= (uint)ALBW_AS_U32(DAT_0045b608) &&
         (fVar7 < DAT_0045b60c)) && (in_s1 <= DAT_0045b610)))) &&
      ((piVar5 = DAT_0045b614, *(int **)(param_3 + 0xc0) == param_2 &&
       (piVar1 = *(int **)(**(int **)(param_1 + 0x1c) + 0x10), piVar1 != (int *)0x0)))))) {
    piVar2 = (int *)(**(code **)(*piVar1 + 8))(piVar1);
    while (piVar2 != piVar5) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
    if (piVar1 != (int *)0x0) {
      func_0023248C(param_1,param_2,param_3);
      iVar6 = *(int *)(param_1 + 0x54);
      iVar3 = *(int *)(param_1 + 0x4c);
      while (piVar5 = (int *)(iVar3 - iVar6),
            piVar5 != (int *)((param_1 + 0x48) - *(int *)(param_1 + 0x54))) {
        if ((piVar5[6] & 2U) != 0) {
          (**(code **)(*piVar5 + 0x10))(piVar5,param_2,param_3);
        }
        iVar3 = *(int *)((int)piVar5 + iVar6 + 4);
      }
      return;
    }
  }
  return;
}

