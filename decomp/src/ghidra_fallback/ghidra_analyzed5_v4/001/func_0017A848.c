#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0017A7AC(int param_1,undefined4 param_2,int param_3);
extern int func_00294C5C(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004EB908(int param_1,int param_2,int param_3);
extern int func_00540368(int param_1,uint param_2);
extern int func_00583B1C(int param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_0017a9f8;
extern int *DAT_0017a9fc;
extern int *DAT_0017aa00;
extern int *DAT_0017aa04;
extern undefined4 *DAT_0017aa08;

// USA 0017A848 <- EU 0017A848 (Ghidra, non-matching)
// GLOBAL DAT_0017a9f8 int *
// GLOBAL DAT_0017a9fc int *
// GLOBAL DAT_0017aa00 int *
// GLOBAL DAT_0017aa04 int *
// GLOBAL DAT_0017aa08 undefined4 *

undefined4 func_0017A848(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_r2;
  int in_r3;
  float in_s0;
  
  piVar2 = DAT_0017a9fc;
  piVar1 = DAT_0017a9f8;
  if ((char)param_1[0x268] == '\0') {
    if ((char)param_1[0x262] == '\0') {
      iVar4 = func_00588BE4((int)param_1);
      iVar6 = *piVar1;
      if ((iVar4 == iVar6) && ((char)param_1[0x264] != '\0')) {
        func_00294C5C(*piVar2,iVar6,in_r2,in_r3);
        *(undefined1 *)(param_1 + 0x264) = 0;
      }
      param_1[0x261] = 7;
      *(char *)(param_1 + 0x262) = (char)param_1[0x262] + '\x01';
    }
    else {
      iVar4 = func_00588BE4((int)param_1);
      if ((iVar4 == *piVar1) && (iVar4 = func_00540368(*piVar2,0x40), iVar4 == 0)) {
        func_004AD9E8(*DAT_0017aa00,1,0,0,in_s0);
        param_1[0x261] = 8;
        func_0017A7AC((int)param_1,8,0);
        func_004EB908(*piVar2,0x78,1);
      }
      iVar4 = func_00588BE4((int)param_1);
      if (iVar4 == *DAT_0017aa04) {
        iVar4 = param_1[0x266];
        param_1[0x266] = iVar4 + 1;
        puVar3 = DAT_0017aa08;
        if (param_1[0x265] <= iVar4 + 1) {
          param_1[0x266] = 0;
          uVar5 = func_00111A64((uint *)*puVar3);
          param_1[0x265] = (int)((ulonglong)uVar5 * 500 >> 0x20) + 400;
          (**(code **)(*param_1 + 0xac))(param_1,4,0xffffffff);
        }
        if ((*(char *)((int)param_1 + 0x852) == '\x04') &&
           (iVar4 = func_00583B1C((int)param_1), iVar4 != 0)) {
          (**(code **)(*param_1 + 0xac))(param_1,3,0xffffffff);
        }
        if (*(char *)((int)param_1 + 0x852) != '\x03' && *(char *)((int)param_1 + 0x852) != '\x04')
        {
                    /* WARNING: Could not recover jumptable at 0x0017a9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          return (**(code **)(*param_1 + 0xac))(param_1,3,0xffffffff);
        }
      }
    }
  }
  return 0;
}

