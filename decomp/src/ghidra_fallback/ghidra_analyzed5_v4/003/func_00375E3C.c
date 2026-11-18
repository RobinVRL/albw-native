#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00151150(int param_1,float *param_2);
extern int func_001512E8(int *param_1);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D8A88(float *param_1,uint param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern float *pfRam00375e7c;
extern int *piRam00375e78;
extern int *DAT_00331584;
extern undefined4 *DAT_00331588;
extern int DAT_0033158c;
extern uint *DAT_00331590;
extern undefined4 *DAT_00331594;
extern undefined4 DAT_00331598;

// USA 00375E3C <- EU 00375E18 (Ghidra, non-matching)
// GLOBAL DAT_00331584 int *
// GLOBAL DAT_00331588 undefined4 *
// GLOBAL DAT_0033158c int
// GLOBAL DAT_00331590 uint *
// GLOBAL DAT_00331594 undefined4 *
// GLOBAL DAT_00331598 undefined4
// GLOBAL UNK_00375e78 int *
// GLOBAL UNK_00375e7c float *

void func_00375E3C(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_30 ((float *)(albw_frame + 0x0))
  func_004CF478(*(int *)(param_1 + 0x430),0);
  func_004D8A88(afStack_30,*piRam00375e78 + *(int *)(param_1 + 1000));
  func_0015133C(*(int *)(param_1 + 0x434),afStack_30);
  func_00151150(*(int *)(param_1 + 0x434),pfRam00375e7c);
  func_001512E8(*(int **)(param_1 + 0x434));
  piVar3 = DAT_00331584;
  piVar1 = (int *)func_005841A8(*DAT_00331584,*DAT_00331588,*(int **)(DAT_0033158c + *DAT_00331584))
  ;
  bVar4 = *(int **)(*piVar3 + 0x3dbc8) != piVar1;
  if (bVar4) {
    piVar3 = (int *)*piVar1;
  }
  if (bVar4 && piVar3 != (int *)0x0) {
    if (((*DAT_00331590 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00331590), iVar2 != 0)) {
      *DAT_00331594 = DAT_00331598;
    }
    iVar2 = (**(code **)*piVar3)(piVar3,DAT_00331594);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      piVar3[0x109] = 0;
      piVar3[0x10a] = 300;
    }
  }
  return;
}

