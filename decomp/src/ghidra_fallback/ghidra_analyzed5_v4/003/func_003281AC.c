#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_002E1BC4(int param_1,int *param_2,uint *param_3);
extern int func_003C7A20(int *param_1,short *param_2);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern uint *DAT_00328598;
extern undefined *DAT_0032859c;
extern int DAT_003285a0;
extern undefined4 DAT_003285a4;
extern int *DAT_003285d0;
extern int *DAT_003285fc;
extern char s_Byaml_CameraParamStage_byaml_003285b0[];
extern char s_FlatApplField_003285e0[];
extern char s_FlatAppl_003285d4[];
extern char s_FlatReal_003285f0[];
extern char s_World_003285a8[];
extern char s_cf_003285b0[];

// USA 003281AC <- EU 00328188 (Ghidra, non-matching)
// GLOBAL DAT_00328598 uint *
// GLOBAL DAT_0032859c undefined *
// GLOBAL DAT_003285a0 int
// GLOBAL DAT_003285a4 undefined4
// GLOBAL DAT_003285d0 int *
// GLOBAL DAT_003285fc int *
// GLOBAL s_cf_003285b0 string
// GLOBAL s_FlatApplField_003285e0 string
// GLOBAL s_FlatAppl_003285d4 string
// GLOBAL s_FlatReal_003285f0 string
// GLOBAL s_World_003285a8 string

int func_003281AC(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int extraout_r1;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(char * *)(albw_frame + 0x4))
  #define local_68 (*(undefined4 *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(int *)(albw_frame + 0x2c))
  #define local_40 (*(char * *)(albw_frame + 0x30))
  #define local_3c (*(undefined1 *)(albw_frame + 0x34))
  #define local_3b (*(undefined1 *)(albw_frame + 0x35))
  #define local_3a (*(undefined1 *)(albw_frame + 0x36))
  #define local_39 (*(undefined1 *)(albw_frame + 0x37))
  #define local_38 (*(undefined1 *)(albw_frame + 0x38))
  #define aiStack_30 ((int *)(albw_frame + 0x40))
  #define local_28 (*(int *)(albw_frame + 0x48))
  local_28 = param_1;
  func_0010E3C4((uint *)(param_1 + 0x10),DAT_00328598,0x24);
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined1 *)(param_1 + 0x36) = 0;
  puVar1 = DAT_0032859c;
  iVar8 = 0x40;
  *(undefined1 *)(param_1 + 0x37) = 1;
  iVar4 = func_00100118(param_1 + 0x38,puVar1,0x14,0x40);
  local_28 = iVar4 + -0x38;
  puVar9 = (uint *)(iVar4 + 0x500);
  func_0010E3C4(puVar9,DAT_00328598,0x24);
  iVar13 = local_28;
  *(undefined1 *)(iVar4 + 0x524) = 1;
  *(undefined1 *)(iVar4 + 0x525) = 1;
  *(undefined1 *)(iVar4 + 0x526) = 0;
  *(undefined1 *)(iVar4 + 0x527) = 1;
  func_0010E3C4((uint *)(local_28 + 0x560),DAT_00328598,0x24);
  iVar6 = local_28;
  *(undefined1 *)(iVar13 + 0x584) = 1;
  *(undefined1 *)(iVar13 + 0x585) = 1;
  *(undefined1 *)(iVar13 + 0x586) = 0;
  *(undefined1 *)(iVar13 + 0x587) = 1;
  puVar10 = (uint *)(local_28 + 0x588);
  func_0010E3C4(puVar10,DAT_00328598,0x24);
  *(undefined1 *)(iVar6 + 0x5ac) = 1;
  *(undefined1 *)(iVar6 + 0x5ad) = 1;
  *(undefined1 *)(iVar6 + 0x5ae) = 0;
  local_70 = DAT_003285a0;
  *(undefined1 *)(iVar6 + 0x5af) = 1;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0x20;
  uStack_5c = 0;
  local_58 = 0;
  local_44 = local_70;
  local_54 = 0;
  local_40 = s_World_003285a8;
  local_50 = 0;
  local_3c = 7;
  local_3b = 4;
  local_6c = s_Byaml_CameraParamStage_byaml_003285b0;
  local_39 = 0;
  local_3a = 0xf;
  local_4c = 0;
  local_48 = 0;
  local_38 = 1;
  puVar5 = func_001E1EDC(*DAT_003285d0,&local_70);
  func_003C7A20(aiStack_30,(short *)puVar5[5]);
  cVar3 = func_002E1BC4(local_28 + 0x560,aiStack_30,(uint *)s_FlatAppl_003285d4);
  iVar13 = local_28;
  if (cVar3 == '\0') {
    func_0010E3C4((uint *)(local_28 + 0x560),DAT_00328598,0x24);
    *(undefined1 *)(iVar13 + 0x584) = 1;
    *(undefined1 *)(iVar13 + 0x585) = 1;
    *(undefined1 *)(iVar13 + 0x586) = 0;
    *(undefined1 *)(iVar13 + 0x587) = 1;
  }
  cVar3 = func_002E1BC4((int)puVar10,aiStack_30,(uint *)s_FlatApplField_003285e0);
  if (cVar3 == '\0') {
    func_0010E3C4(puVar10,DAT_00328598,0x24);
    *(undefined1 *)(iVar6 + 0x5ac) = 1;
    *(undefined1 *)(iVar6 + 0x5ad) = 1;
    *(undefined1 *)(iVar6 + 0x5ae) = 0;
    *(undefined1 *)(iVar6 + 0x5af) = 1;
  }
  cVar3 = func_002E1BC4((int)puVar9,aiStack_30,(uint *)s_FlatReal_003285f0);
  if (cVar3 == '\0') {
    func_0010E3C4(puVar9,DAT_00328598,0x24);
    *(undefined1 *)(iVar4 + 0x524) = 1;
    *(undefined1 *)(iVar4 + 0x525) = 1;
    *(undefined1 *)(iVar4 + 0x526) = 0;
    *(undefined1 *)(iVar4 + 0x527) = 1;
  }
  piVar2 = DAT_003285fc;
  uVar15 = 0;
  do {
    iVar13 = *(int *)(*piVar2 + uVar15 * 0x16c + 0x44);
    if (0 < iVar13) {
      iVar4 = local_28 + uVar15 * 0x14;
      iVar6 = func_0010CEE0(iVar13 * 0x2c,(int *)0x0,4);
      if (iVar6 != 0) {
        iVar14 = iVar13 + -1;
        iVar7 = extraout_r1;
        if (0 < iVar14) {
          iVar7 = 0;
          iVar8 = iVar13 + -1;
        }
        *(int *)(iVar4 + 0x44) = iVar6;
        if (0 < iVar14) {
          do {
            iVar8 = iVar8 + -1;
            *(int *)(iVar6 + iVar7 * 4) = iVar6 + (iVar7 + 10) * 4;
            iVar7 = iVar7 + 10;
          } while (iVar8 != 0);
        }
        *(undefined4 *)(iVar6 + iVar14 * 0x28) = 0;
        *(int *)(iVar4 + 0x48) = iVar6;
        func_0010B3EC((undefined4 *)(iVar4 + 0x38),iVar13,iVar6 + iVar13 * 0x28);
      }
      uVar12 = 0;
      if (0 < iVar13) {
        do {
          iVar6 = func_00582260(*piVar2,uVar15,uVar12);
          (**(code **)(*(int *)(iVar6 + 4) + 8))(iVar6 + 4);
          piVar11 = (int *)(iVar4 + 0x38);
          puVar9 = *(uint **)(iVar6 + 8);
          if (*piVar11 < *(int *)(iVar4 + 0x3c)) {
            puVar10 = *(uint **)(iVar4 + 0x44);
            if (puVar10 != (uint *)0x0) {
              *(uint *)(iVar4 + 0x44) = *puVar10;
              func_0010E3C4(puVar10,DAT_00328598,0x24);
              *(undefined1 *)(puVar10 + 9) = 1;
              *(undefined1 *)((int)puVar10 + 0x25) = 1;
              *(undefined1 *)((int)puVar10 + 0x26) = 0;
              *(undefined1 *)((int)puVar10 + 0x27) = 1;
            }
            if (*piVar11 < *(int *)(iVar4 + 0x3c)) {
              *(uint **)(*(int *)(iVar4 + 0x40) + *piVar11 * 4) = puVar10;
              *piVar11 = *piVar11 + 1;
            }
          }
          else {
            puVar10 = (uint *)0x0;
          }
          cVar3 = func_002E1BC4((int)puVar10,aiStack_30,puVar9);
          if (cVar3 == '\0') {
            func_0010E3C4(puVar10,DAT_00328598,0x24);
            *(undefined1 *)(puVar10 + 9) = 1;
            *(undefined1 *)((int)puVar10 + 0x25) = 1;
            *(undefined1 *)((int)puVar10 + 0x26) = 0;
            *(undefined1 *)((int)puVar10 + 0x27) = 1;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < iVar13);
      }
    }
    iVar13 = local_28;
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40);
  func_0010E3C4((uint *)(local_28 + 0x10),DAT_00328598,0x24);
  *(undefined1 *)(iVar13 + 0x34) = 1;
  *(undefined1 *)(iVar13 + 0x35) = 1;
  *(undefined1 *)(iVar13 + 0x36) = 0;
  *(undefined1 *)(iVar13 + 0x37) = 1;
  return local_28;
}

