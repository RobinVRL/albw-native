#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_006896BC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_0034bb64;
extern int *DAT_0034bb74;
extern char s_P_Num__02d_0034bb68[];
extern char s_cf_0034bb68[];

// USA 0034BA3C <- EU 0034BA18 (Ghidra, non-matching)
// GLOBAL DAT_0034bb64 int
// GLOBAL DAT_0034bb74 int *
// GLOBAL s_cf_0034bb68 string

void func_0034BA3C(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 in_r3;
  uint uVar8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(int *)(albw_frame + 0x4))
  #define auStack_4c ((undefined4 *)(albw_frame + 0x14))
  puVar2 = (undefined4 *)func_0010BAB4(0x74);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00168434(puVar2);
  }
  func_00168100(piVar3,param_2,param_3);
  *(int **)(param_1 + 0x1c) = piVar3;
  uVar8 = 0;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
  iVar1 = DAT_0034bb64;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      piVar4 = func_006896BC(auStack_4c,s_P_Num__02d_0034bb68,uVar8,in_r3);
      (**(code **)(*piVar4 + 8))(piVar4);
      local_5c = piVar4[1];
      local_60 = iVar1;
      piVar5 = (int *)func_005229AC(piVar3,&local_60);
      piVar4 = DAT_0034bb74;
      if (piVar5 != (int *)0x0) {
        piVar6 = (int *)(**(code **)(*piVar5 + 8))(piVar5);
        do {
          if (piVar6 == piVar4) goto LAB_0034bae8;
          piVar6 = (int *)*piVar6;
        } while (piVar6 != (int *)0x0);
      }
      piVar5 = (int *)0x0;
LAB_0034bae8:
      if ((int)uVar8 < *(int *)(param_1 + 0x2c)) {
        uVar7 = (**(code **)(*piVar5 + 0x28))(piVar5,0);
        if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x24)) {
          *(undefined4 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20) * 4) = uVar7;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        }
      }
      else if ((piVar5 != (int *)0x0) && ((*(byte *)(piVar5 + 0x11) & 1) != 0)) {
        *(byte *)(piVar5 + 0x11) = *(byte *)(piVar5 + 0x11) & 0xfe;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < *(int *)(param_1 + 0x2c));
  }
  return;
}

