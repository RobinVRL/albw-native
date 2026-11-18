#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int DAT_00434bfc;
extern int *DAT_00434c00;
extern int DAT_00434c04;
extern int DAT_00434c08;
extern int *DAT_00434c0c;
extern int DAT_00434c10;
extern undefined4 DAT_00434c14;
extern undefined4 DAT_00434c18;

// USA 00434AB8 <- EU 00434A98 (Ghidra, non-matching)
// GLOBAL DAT_00434bfc int
// GLOBAL DAT_00434c00 int *
// GLOBAL DAT_00434c04 int
// GLOBAL DAT_00434c08 int
// GLOBAL DAT_00434c0c int *
// GLOBAL DAT_00434c10 int
// GLOBAL DAT_00434c14 undefined4
// GLOBAL DAT_00434c18 undefined4

int func_00434AB8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  iVar4 = DAT_00434c04;
  piVar2 = DAT_00434c00;
  iVar1 = DAT_00434bfc;
  iVar8 = 0;
  do {
    iVar7 = DAT_00434c08;
    if (iVar8 != -1) {
      if (((*(uint *)(iVar1 + 4) & 1) == 0) &&
         (iVar6 = func_00100174(DAT_00434c0c), iVar7 = DAT_00434c10, piVar3 = DAT_00434c00,
         iVar6 != 0)) {
        DAT_00434c00[1] = DAT_00434c10;
        *piVar3 = iVar4;
        piVar2[3] = iVar7 + 0x1c;
        piVar2[2] = iVar4;
        piVar2[5] = iVar7 + 0x14;
        piVar2[4] = iVar4;
        piVar2[7] = iVar7 + 0x10;
        piVar2[6] = iVar4;
        piVar2[9] = iVar7 + -0x60;
        piVar2[8] = iVar4;
      }
      iVar7 = piVar2[iVar8 * 2 + 1];
    }
    local_30 = iVar4;
    local_2c = iVar7;
    (**(code **)(iVar4 + 8))(&local_30);
    (**(code **)(local_30 + 8))(&local_30);
    iVar7 = local_2c;
    (**(code **)(*param_1 + 8))(param_1);
    bVar5 = true;
    if (iVar7 != param_1[1]) {
      iVar7 = 0;
      do {
        if (*(char *)(local_2c + iVar7) != *(char *)(param_1[1] + iVar7)) break;
        if (*(char *)(local_2c + iVar7) == '\0') goto LAB_00434bc8;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x40001);
      bVar5 = false;
    }
LAB_00434bc8:
    if (bVar5) {
      return (int)(char)iVar8;
    }
    iVar8 = iVar8 + 1;
    if (3 < iVar8) {
      return -1;
    }
  } while( true );
}

