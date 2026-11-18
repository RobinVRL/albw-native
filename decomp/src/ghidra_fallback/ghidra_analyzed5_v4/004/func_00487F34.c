#include "ghidra_types.h"

extern int func_00428AB4(int *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_00569310(float *param_1,int param_2);
extern int func_00583794(int *param_1,int *param_2);
extern int DAT_004880bc;
extern int *DAT_004880c0;
extern int DAT_004880c4;
extern char s_T_Name_00_004880b0[];

// USA 00487F34 <- EU 00487F0C (Ghidra, non-matching)
// GLOBAL DAT_004880bc int
// GLOBAL DAT_004880c0 int *
// GLOBAL DAT_004880c4 int
// GLOBAL s_T_Name_00_004880b0 string

void func_00487F34(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(int *)(albw_frame + 0x8))
  #define local_84 (*(undefined2 * *)(albw_frame + 0xc))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x10))
  #define local_7c ((undefined2 *)(albw_frame + 0x14))
  #define local_3e (*(undefined2 *)(albw_frame + 0x52))
  #define local_38 ((float *)(albw_frame + 0x58))
  #define local_30 (*(float *)(albw_frame + 0x60))
  #define local_28 (*(int *)(albw_frame + 0x68))
  #define local_24 (*(char * *)(albw_frame + 0x6c))
  if (*(int *)(param_1 + 0x14c) != 0) {
    local_24 = s_T_Name_00_004880b0;
    local_28 = DAT_004880bc;
    piVar2 = (int *)func_005229AC(*(int **)(param_1 + 0x1c),&local_28);
    piVar1 = DAT_004880c0;
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (piVar3 == piVar1) goto LAB_00487f7c;
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_00487f7c:
    local_84 = local_7c;
    uStack_80 = 0x20;
    local_3e = 0;
    local_88 = DAT_004880c4;
    local_7c[0] = 0;
    func_00583794(param_2,&local_88);
    (**(code **)(local_88 + 8))(&local_88);
    uVar7 = 0;
    do {
      if (local_84[uVar7] == 0) {
        if ((int)uVar7 < 0x40001) goto LAB_00487fe8;
        break;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 0x40001);
    uVar7 = 0;
LAB_00487fe8:
    (**(code **)(local_88 + 8))(&local_88);
    (**(code **)(*piVar2 + 0x60))(piVar2,local_84,0,uVar7 & 0xffff);
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x14c) + 0x40);
    func_00569310(local_38,(int)piVar2);
    iVar4 = *(int *)(param_1 + 0x14c);
    *(float *)(iVar4 + 0x3c) =
         *(float *)(param_1 + 0x150) - (ALBW_AS_F32(piVar2[0xf]) - (local_30 - local_38[0]));
    *(undefined4 *)(iVar4 + 0x40) = uVar6;
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
    iVar4 = *(int *)(param_1 + 0x14c);
    iVar5 = *(int *)(param_1 + 0x1c);
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x44) & 1) == 0)) {
      *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
      *(byte *)(iVar5 + 0x70) = *(byte *)(iVar5 + 0x70) | 2;
    }
    func_00428AB4((int *)(param_1 + 0x74),1);
  }
  return;
}

