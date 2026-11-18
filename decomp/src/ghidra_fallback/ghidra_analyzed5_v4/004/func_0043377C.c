#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00433908;
extern int *DAT_0043390c;
extern int DAT_00433910;
extern int DAT_00433914;
extern int DAT_00433918;
extern undefined4 DAT_0043391c;
extern undefined4 DAT_00433920;

// USA 0043377C <- EU 0043375C (Ghidra, non-matching)
// GLOBAL DAT_00433908 uint *
// GLOBAL DAT_0043390c int *
// GLOBAL DAT_00433910 int
// GLOBAL DAT_00433914 int
// GLOBAL DAT_00433918 int
// GLOBAL DAT_0043391c undefined4
// GLOBAL DAT_00433920 undefined4

int func_0043377C(int *param_1)

{
  uint *puVar1;
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
  iVar4 = DAT_00433910;
  piVar2 = DAT_0043390c;
  puVar1 = DAT_00433908;
  iVar8 = 0;
  do {
    iVar7 = DAT_00433914;
    if (iVar8 != -1) {
      if (((*puVar1 & 1) == 0) &&
         (iVar6 = func_00100174((int *)DAT_00433908), iVar7 = DAT_00433918, piVar3 = DAT_0043390c,
         iVar6 != 0)) {
        DAT_0043390c[1] = DAT_00433918;
        *piVar3 = iVar4;
        piVar2[3] = iVar7 + -8;
        piVar2[2] = iVar4;
        piVar2[5] = iVar7 + -0xc;
        piVar2[4] = iVar4;
        piVar2[7] = iVar7 + -0x14;
        piVar2[6] = iVar4;
        piVar2[9] = iVar7 + -0x20;
        piVar2[8] = iVar4;
        piVar2[0xb] = iVar7 + -0x28;
        piVar2[10] = iVar4;
        piVar2[0xd] = iVar7 + -0x34;
        piVar2[0xc] = iVar4;
        piVar2[0xf] = iVar7 + -0x40;
        piVar2[0xe] = iVar4;
        piVar2[0x11] = iVar7 + -0x50;
        piVar2[0x10] = iVar4;
        piVar2[0x13] = iVar7 + -0x5c;
        piVar2[0x12] = iVar4;
        piVar2[0x15] = iVar7 + -0x60;
        piVar2[0x14] = iVar4;
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
        if (*(char *)(local_2c + iVar7) == '\0') goto LAB_004338d4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x40001);
      bVar5 = false;
    }
LAB_004338d4:
    if (bVar5) {
      return (int)(char)iVar8;
    }
    iVar8 = iVar8 + 1;
    if (9 < iVar8) {
      return -1;
    }
  } while( true );
}

