#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_00426294(uint param_1);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_0048693c;
extern int DAT_00486940;
extern undefined4 *DAT_00486944;
extern int *DAT_00486948;
extern char s_ItemTutorial_0048694c[];

// USA 004867F8 <- EU 004867D0 (Ghidra, non-matching)
// GLOBAL DAT_0048693c int
// GLOBAL DAT_00486940 int
// GLOBAL DAT_00486944 undefined4 *
// GLOBAL DAT_00486948 int *
// GLOBAL s_ItemTutorial_0048694c string

undefined4 func_004867F8(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0x1c))
  #define local_20 (*(int *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x24))
  if ((param_2 < 0x17) &&
     (piVar6 = (int *)(DAT_0048693c + param_2 * 0xc), *(char *)piVar6[1] != '\0')) {
    func_002316CC(param_1 + 0x74,ALBW_AS_F32(piVar6[2]));
    local_38[3] = 0xffffffff;
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_24 = (char *)func_00426294(param_2);
    piVar1 = DAT_00486948;
    iVar4 = DAT_00486940;
    uVar5 = 0;
    if (local_24 != (char *)0x0) {
      local_38[4] = DAT_00486940;
      local_1c = *DAT_00486944;
      local_20 = DAT_00486940;
      iVar2 = func_005826A4(*DAT_00486948,local_38,&local_20,local_38 + 4);
      if (iVar2 != 0) {
        func_001788DC(*(int *)(param_1 + 0x80),local_38);
        iVar2 = *(int *)(param_1 + 0x80);
        piVar3 = *(int **)(param_1 + 0x84);
        *(undefined2 *)(iVar2 + 0x32) = 0;
        *(undefined1 *)(iVar2 + 0x3d) = 0;
        (**(code **)(*piVar3 + 0x60))
                  (piVar3,*(undefined4 *)(*(int *)(param_1 + 0x80) + 8),0,
                   *(ushort *)(*(int *)(param_1 + 0x80) + 0x20) >> 1);
      }
      local_24 = s_ItemTutorial_0048694c;
      local_38[4] = iVar4;
      iVar4 = func_005826A4(*piVar1,local_38,local_38 + 4,piVar6);
      if (iVar4 != 0) {
        func_001788DC(*(int *)(param_1 + 0x80),local_38);
        iVar4 = *(int *)(param_1 + 0x80);
        piVar6 = *(int **)(param_1 + 0x88);
        *(undefined2 *)(iVar4 + 0x32) = 0;
        *(undefined1 *)(iVar4 + 0x3d) = 0;
        (**(code **)(*piVar6 + 0x60))
                  (piVar6,*(undefined4 *)(*(int *)(param_1 + 0x80) + 8),0,
                   *(ushort *)(*(int *)(param_1 + 0x80) + 0x20) >> 1);
      }
      uVar5 = 1;
    }
    return uVar5;
  }
  return 0;
}

