#include "ghidra_types.h"

extern int func_001B6E04(undefined4 *param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00421920;
extern int DAT_00421924;
extern int DAT_00421928;
extern undefined1 *DAT_0042192c;
extern int DAT_00421940;
extern int *DAT_00421950;
extern char s_Ed_StaffCreditT_00421930[];
extern char s_T_Job_00_00421944[];
extern char s_T_Kenri_00_00421960[];
extern char s_T_Name_00_00421954[];

// USA 004217C0 <- EU 004217A0 (Ghidra, non-matching)
// GLOBAL DAT_00421920 int
// GLOBAL DAT_00421924 int
// GLOBAL DAT_00421928 int
// GLOBAL DAT_0042192c undefined1 *
// GLOBAL DAT_00421940 int
// GLOBAL DAT_00421950 int *
// GLOBAL s_Ed_StaffCreditT_00421930 string
// GLOBAL s_T_Job_00_00421944 string
// GLOBAL s_T_Kenri_00_00421960 string
// GLOBAL s_T_Name_00_00421954 string

int * func_004217C0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar5 = func_001B6E04(param_1);
  *piVar5 = DAT_00421928;
  piVar5[0xe] = 0;
  piVar5[0xf] = 0;
  piVar5[0x10] = 0;
  iVar2 = DAT_00421924;
  iVar1 = DAT_00421920;
  piVar5[0x11] = 0;
  puVar3 = DAT_0042192c;
  piVar5[0x12] = iVar1;
  piVar5[0x13] = iVar2;
  *(undefined1 *)(piVar5 + 0x14) = 0xff;
  *(undefined1 *)((int)piVar5 + 0x51) = 0;
  iVar1 = DAT_00421940;
  *puVar3 = 1;
  local_24 = s_Ed_StaffCreditT_00421930;
  local_28 = iVar1;
  (**(code **)(*piVar5 + 0x38))(piVar5,&local_28,0);
  piVar8 = (int *)piVar5[7];
  local_24 = s_T_Job_00_00421944;
  local_28 = iVar1;
  piVar6 = (int *)func_005229AC(piVar8,&local_28);
  piVar4 = DAT_00421950;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar4) goto LAB_0042186c;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_0042186c:
  piVar5[0xe] = (int)piVar6;
  local_24 = s_T_Name_00_00421954;
  local_28 = iVar1;
  piVar6 = (int *)func_005229AC(piVar8,&local_28);
  piVar4 = DAT_00421950;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar4) goto LAB_004218bc;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_004218bc:
  piVar5[0xf] = (int)piVar6;
  local_24 = s_T_Kenri_00_00421960;
  local_28 = iVar1;
  piVar6 = (int *)func_005229AC(piVar8,&local_28);
  piVar4 = DAT_00421950;
  if (piVar6 != (int *)0x0) {
    piVar8 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar8 == piVar4) goto LAB_0042190c;
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_0042190c:
  piVar5[0x10] = (int)piVar6;
  *puVar3 = 0;
  return piVar5;
}

