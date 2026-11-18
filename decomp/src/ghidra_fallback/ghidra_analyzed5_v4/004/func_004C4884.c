#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_001E5884(uint *param_1,undefined4 param_2);
extern int func_004A107C(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_00547904(int param_1,int param_2);
extern int func_00547AE8(int param_1);
extern int *DAT_004c4a84;
extern undefined4 DAT_004c4a88;
extern int DAT_004c4aa4;
extern int DAT_004c4ac0;
extern undefined4 *DAT_004c4ac4;
extern int DAT_004c4ac8;
extern char s_ActorHeap_004c4ab4[];
extern char s_MassHeap_004c4a98[];
extern char s_PlayerHeap_004c4a8c[];
extern char s_SmallHeap_004c4aa8[];

// USA 004C4884 <- EU 004C485C (Ghidra, non-matching)
// GLOBAL DAT_004c4a84 int *
// GLOBAL DAT_004c4a88 undefined4
// GLOBAL DAT_004c4aa4 int
// GLOBAL DAT_004c4ac0 int
// GLOBAL DAT_004c4ac4 undefined4 *
// GLOBAL DAT_004c4ac8 int
// GLOBAL s_ActorHeap_004c4ab4 string
// GLOBAL s_MassHeap_004c4a98 string
// GLOBAL s_PlayerHeap_004c4a8c string
// GLOBAL s_SmallHeap_004c4aa8 string

undefined4 func_004C4884(int param_1,int *param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  uVar4 = DAT_004c4a88;
  iVar6 = *(int *)(*param_2 + 8);
  if (iVar6 == *DAT_004c4a84) {
    local_24 = s_PlayerHeap_004c4a8c;
    local_28 = DAT_004c4a88;
    piVar2 = func_004A107C(0,(int)&local_28,*(int **)(param_1 + 0x14),1,0);
  }
  else {
    iVar3 = func_00547AE8((int)param_2);
    if (iVar3 == 0) {
      iVar6 = func_00547904((int)param_2,iVar6);
      local_28 = uVar4;
      if (iVar6 == 0) {
        local_24 = s_ActorHeap_004c4ab4;
        piVar2 = func_004A107C(0,(int)&local_28,*(int **)(param_1 + 0x24),1,0);
      }
      else {
        local_24 = s_SmallHeap_004c4aa8;
        piVar2 = func_004A107C(0,(int)&local_28,*(int **)(param_1 + 0x20),1,0);
      }
    }
    else {
      local_24 = s_MassHeap_004c4a98;
      local_28 = uVar4;
      piVar5 = *(int **)(param_1 + 0x1c);
      if (*(int **)(param_1 + 0x18) == (int *)0x0) {
        if (piVar5 == (int *)0x0) {
          return 0;
        }
        if (*(int *)(DAT_004c4aa4 + param_1) == 0) {
          iVar6 = 1;
        }
        else {
          iVar6 = -1;
        }
        piVar2 = func_004A107C(*(int *)(*param_2 + 0x28) * (uint)*(byte *)(param_2 + 0x16) * 0x400 +
                               0x1000,(int)&local_28,piVar5,iVar6,0);
        if (piVar2 == (int *)0x0) {
          (**(code **)(*piVar5 + 0x3c))(piVar5,4);
          return 0;
        }
        goto LAB_004c49e0;
      }
      piVar2 = func_004A107C(0,(int)&local_28,*(int **)(param_1 + 0x18),1,0);
    }
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
LAB_004c49e0:
  iVar6 = DAT_004c4ac0;
  piVar2[0x1c] = piVar2[0x1c] | 2;
  *(uint *)(param_1 + 0x3dbd4) = *(uint *)(iVar6 + 8 + param_1) | *(int *)(iVar6 + param_1) << 0x16;
  *(undefined1 *)(param_1 + 0x3dbd8) = param_3;
  puVar1 = DAT_004c4ac4;
  iVar6 = func_0010983C(*DAT_004c4ac4,piVar2);
  uVar4 = *(undefined4 *)(DAT_004c4ac8 + param_1);
  *(int *)(param_1 + 0x3dbdc) = *param_2;
  *(undefined4 *)(param_1 + 0x3dbe0) = uVar4;
  uVar4 = (**(code **)(*param_2 + 4))(param_2);
  func_001E5884((uint *)(param_1 + 0x3dbbc),uVar4);
  *(int *)(param_1 + 0x3dbdc) = 0;
  *(undefined4 *)(param_1 + 0x3dbe0) = 0;
  if (iVar6 != 1) {
    func_0010983C(*puVar1,iVar6);
  }
  return uVar4;
}

