#include "ghidra_types.h"

extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_00294F4C(int param_1,int param_2,float fparam_0);
extern int func_00297448(int param_1,int param_2,float fparam_0);
extern int func_00297474(int param_1,int param_2,float fparam_0);
extern int func_004EC074(int param_1,int param_2,float fparam_0);
extern int func_004EC988(int param_1,int *param_2,int param_3);
extern float func_005380E0(int param_1);
extern float func_005381B4(int param_1);
extern int func_00539200(int param_1);
extern int func_00540980(int param_1);
extern float DAT_0025a85c;
extern undefined4 DAT_0025a860;
extern int *DAT_0025a864;
extern int DAT_0025a884;
extern float DAT_0025a888;
extern float DAT_0025a88c;
extern float DAT_0025a890;
extern float DAT_0025a894;
extern float DAT_0025a898;
extern float DAT_0025a89c;
extern char s_SE_ENV_DUNGEON_CHASTLE_WIND_0025a868[];

// USA 0025A668 <- EU 0025A690 (Ghidra, non-matching)
// GLOBAL DAT_0025a85c float
// GLOBAL DAT_0025a860 undefined4
// GLOBAL DAT_0025a864 int *
// GLOBAL DAT_0025a884 int
// GLOBAL DAT_0025a888 float
// GLOBAL DAT_0025a88c float
// GLOBAL DAT_0025a890 float
// GLOBAL DAT_0025a894 float
// GLOBAL DAT_0025a898 float
// GLOBAL DAT_0025a89c float
// GLOBAL s_SE_ENV_DUNGEON_CHASTLE_WIND_0025a868 string

undefined4 func_0025A668(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fparam_1;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_0025a864;
  uVar8 = CONCAT44(DAT_0025a860,DAT_0025a85c);
  fVar7 = DAT_0025a85c;
  if (*(char *)(param_1 + 0xd9) != '\0') {
    local_24 = s_SE_ENV_DUNGEON_CHASTLE_WIND_0025a868;
    local_28 = DAT_0025a884;
    func_004EC988(*DAT_0025a864,&local_28,param_1 + 0x78);
    bVar2 = func_00539200(param_1 + 0x78);
    if (bVar2) {
      fparam_1 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x4c),
                                            (byte)(in_fpscr >> 0x15) & 3);
      fVar7 = ALBW_AS_F32(uVar8);
      fVar6 = DAT_0025a888 + fparam_1 * DAT_0025a88c;
      fVar5 = DAT_0025a888;
      if ((DAT_0025a888 <= fVar6) && (fVar5 = fVar6, fVar7 < fVar6)) {
        fVar5 = fVar7;
      }
      func_0025B860(param_1 + 0x78,0,fVar5,fparam_1);
      fVar7 = fVar7 - fVar5 * DAT_0025a890;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x4c);
  bVar2 = uVar3 == *(uint *)(param_1 + 0x50);
  if (bVar2) {
    uVar3 = (uint)*(byte *)(param_1 + 0xda);
  }
  if (!bVar2 || uVar3 != 0) {
    if (*(char *)(param_1 + 0xd9) == '\0') {
      iVar4 = func_00540980(*piVar1);
      if (iVar4 != 0) {
        func_00294F4C(*piVar1,0x3c,ALBW_AS_F32(uVar8));
      }
    }
    else {
      iVar4 = func_00540980(*piVar1);
      if (iVar4 != 0) {
        func_00294F4C(*piVar1,0x3c,fVar7);
      }
    }
    fVar7 = ALBW_AS_F32(((ulonglong)uVar8 >> 0x20));
    if (*(char *)(param_1 + 0xda) != '\0') {
      if (*(char *)(param_1 + 0xd9) != '\0') {
        func_00297448(*piVar1,0x3c,DAT_0025a894);
        func_004EC074(*piVar1,0x3c,DAT_0025a898);
        return func_00297474(*piVar1,0x3c,DAT_0025a89c);
      }
      fVar5 = func_005380E0(param_1);
      func_00297448(*piVar1,0x3c,fVar5);
      fVar5 = func_005381B4(param_1);
      func_004EC074(*piVar1,0x3c,fVar5);
      return func_00297474(*piVar1,0x3c,fVar7);
    }
  }
  return 0;
}

