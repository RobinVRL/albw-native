// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_0017B378(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_001DDDE8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0033B070(float *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00361640();
extern int func_00520FC0(void);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00659168(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_0017d15c;
extern int *DAT_0017d160;
extern int DAT_0017d164;
extern undefined4 *DAT_0017d168;
extern float DAT_0017d16c;
extern undefined4 DAT_0017d194;
extern undefined4 DAT_0017d198;
extern float DAT_0017d19c;
extern char s_Link_Encounter_Link_EncounterWai_0017d170[];
extern char s_cf_0017d170[];

// USA 0017CED0 <- EU 0017CED0 (Ghidra, non-matching)
// GLOBAL DAT_0017d15c int *
// GLOBAL DAT_0017d160 int *
// GLOBAL DAT_0017d164 int
// GLOBAL DAT_0017d168 undefined4 *
// GLOBAL DAT_0017d16c float
// GLOBAL DAT_0017d194 undefined4
// GLOBAL DAT_0017d198 undefined4
// GLOBAL DAT_0017d19c float
// GLOBAL s_cf_0017d170 string

undefined4 func_0017CED0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  float *pfVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define iStack_f0 (*(int *)(albw_frame + 0x0))
  #define local_ec (*(float *)(albw_frame + 0x4))
  #define fStack_e8 (*(float *)(albw_frame + 0x8))
  #define local_e4 (*(float *)(albw_frame + 0xc))
  #define local_e0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_dc (*(char * *)(albw_frame + 0x14))
  #define local_90 (*(float *)(albw_frame + 0x60))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x64))
  #define local_88 (*(undefined4 *)(albw_frame + 0x68))
  #define afStack_84 ((float *)(albw_frame + 0x6c))
  #define local_74 (*(int *)(albw_frame + 0x7c))
  #define aiStack_70 ((int *)(albw_frame + 0x80))
  local_90 = *(float *)(param_1 + 0x3d0);
  uStack_8c = *(undefined4 *)(param_1 + 0x3d4);
  local_88 = *(undefined4 *)(param_1 + 0x3d8);
  iVar9 = *DAT_0017d15c;
  iVar3 = *DAT_0017d160;
  piVar8 = *(int **)(DAT_0017d164 + 8 + iVar3);
  piVar4 = (int *)func_005841A8(iVar3,*DAT_0017d168,*(int **)(DAT_0017d164 + iVar3));
  bVar10 = piVar4 != piVar8;
  if (bVar10) {
    piVar4 = (int *)*piVar4;
  }
  if (bVar10 && piVar4 != (int *)0x0) {
    local_88 = piVar4[0xf6];
    local_90 = ALBW_AS_F32(piVar4[0xf4]);
    uStack_8c = piVar4[0xf5];
  }
  cVar1 = *(char *)(param_1 + 0x880);
  if (cVar1 == '\0') {
    uVar7 = *(uint *)(param_1 + 0x850);
    if (*(uint *)(param_1 + 0x854) <= uVar7) {
      puVar5 = (uint *)func_002C11E8(&iStack_f0,4,10,0);
      func_0016898C(*(int *)(param_1 + 0x7b4),puVar5);
      *(char *)(param_1 + 0x880) = *(char *)(param_1 + 0x880) + '\x01';
      goto LAB_0017d0f4;
    }
  }
  else {
    if (cVar1 == '\x01') {
      iVar3 = *(int *)(*(int *)(param_1 + 0x7b4) + 0x14);
      if (*(char *)(iVar3 + 0x1c) == '\0') {
        if (*(float *)(iVar3 + 0x10) < DAT_0017d16c) {
          if (DAT_0017d16c < *(float *)(iVar3 + 8)) goto LAB_0017d0f4;
        }
        else if (*(float *)(iVar3 + 8) != *(float *)(iVar3 + 0x14)) goto LAB_0017d0f4;
        if (**(int **)(*(int *)(param_1 + 0x7b4) + 0x14) == 4) {
          puVar5 = (uint *)func_002C11E8(aiStack_70,0,10,0);
          func_0016898C(*(int *)(param_1 + 0x7b4),puVar5);
          pfVar6 = (float *)func_00520FC0();
          local_ec = *pfVar6;
          fStack_e8 = pfVar6[1];
          local_e4 = pfVar6[2];
          func_0033B070(&local_ec,0,7);
          piVar4 = (int *)func_00361640(iVar9);
          if (piVar4 != (int *)0x0) {
            local_dc = s_Link_Encounter_Link_EncounterWai_0017d170;
            local_e0 = DAT_0017d194;
            (**(code **)(*piVar4 + 8))(piVar4,&local_e0);
          }
          uVar2 = DAT_0017d198;
          *(undefined4 *)(param_1 + 0x854) = 0x3c;
          *(undefined4 *)(param_1 + 0x858) = uVar2;
          *(undefined4 *)(param_1 + 0x850) = 0;
          *(char *)(param_1 + 0x880) = *(char *)(param_1 + 0x880) + '\x01';
        }
      }
      goto LAB_0017d0f4;
    }
    if (cVar1 != '\x02') goto LAB_0017d0f4;
    uVar7 = *(uint *)(param_1 + 0x850);
    if (*(uint *)(param_1 + 0x854) <= uVar7) {
      func_00659168((undefined4 *)(param_1 + 0x788),5);
      goto LAB_0017d0f4;
    }
  }
  *(uint *)(param_1 + 0x850) = uVar7 + 1;
LAB_0017d0f4:
  pfVar6 = (float *)func_00520FC0();
  func_00115C70(afStack_84,pfVar6,(float *)(param_1 + 0x3d0));
  piVar4 = (int *)0x0;
  local_74 = func_0068C690(afStack_84);
  if (0x1e < *(int *)(param_1 + 0x788)) {
    piVar4 = &local_74;
  }
  func_0017B378(param_1,piVar4,0,0);
  return func_001DDDE8(iVar9,&local_90,3,DAT_0017d19c);
}

