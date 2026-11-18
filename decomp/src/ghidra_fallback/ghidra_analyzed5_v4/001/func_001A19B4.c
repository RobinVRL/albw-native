#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001A094C(int param_1,int param_2);
extern int func_001A1040(int param_1,uint param_2);
extern int func_004FC570();
extern int func_00520FC0(void);
extern int func_00521078(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0065A330(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_001a1cbc;
extern int DAT_001a1cc0;
extern float DAT_001a1cd4;
extern float DAT_001a1cd8;
extern int *DAT_001a1cdc;
extern float DAT_001a1cf0;
extern int DAT_001a1cf4;
extern int DAT_001a1cf8;
extern uint *DAT_001a1cfc;
extern int DAT_001a1d00;
extern char s_SE_DegTail_LAND_001a1cc4[];
extern char s_SE_DegTail_ROLL_001a1ce0[];

// USA 001A19B4 <- EU 001A19B4 (Ghidra, non-matching)
// GLOBAL DAT_001a1cbc float
// GLOBAL DAT_001a1cc0 int
// GLOBAL DAT_001a1cd4 float
// GLOBAL DAT_001a1cd8 float
// GLOBAL DAT_001a1cdc int *
// GLOBAL DAT_001a1cf0 float
// GLOBAL DAT_001a1cf4 int
// GLOBAL DAT_001a1cf8 int
// GLOBAL DAT_001a1cfc uint *
// GLOBAL DAT_001a1d00 int
// GLOBAL s_SE_DegTail_LAND_001a1cc4 string
// GLOBAL s_SE_DegTail_ROLL_001a1ce0 string

undefined4 func_001A19B4(int *param_1)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define local_4c ((int *)(albw_frame + 0x14))
  #define local_44 ((float *)(albw_frame + 0x1c))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define afStack_38 ((float *)(albw_frame + 0x28))
  #define local_28 (*(int *)(albw_frame + 0x38))
  #define local_24 (*(char * *)(albw_frame + 0x3c))
  iVar4 = DAT_001a1cc0;
  fVar9 = DAT_001a1cbc;
  if ((*(char *)((int)param_1 + 0x1222) == '\0') &&
     ((ALBW_AS_F32(param_1[0xf8]) != DAT_001a1cbc || (ALBW_AS_F32(param_1[3]) < ALBW_AS_F32(param_1[0xf5]))))) {
    bVar1 = func_00521078((int)param_1);
    if (bVar1) {
      *(undefined1 *)((int)param_1 + 0x1222) = 1;
      param_1[0xf8] = (int)ALBW_AS_U32(fVar9);
      param_1[0xf5] = param_1[3];
      param_1[0x2cc] = 0;
      local_24 = s_SE_DegTail_LAND_001a1cc4;
      local_28 = iVar4;
      func_00150A84(param_1,&local_28,0);
    }
    else {
      fVar6 = ALBW_AS_F32(param_1[0xf8]) - DAT_001a1cd4;
      if (ALBW_AS_F32(param_1[0xf8]) - DAT_001a1cd4 < DAT_001a1cd8) {
        fVar6 = DAT_001a1cd8;
      }
      param_1[0xf8] = (int)ALBW_AS_U32(fVar6);
    }
  }
  if (param_1[0x274] < 0x14) {
    uVar3 = 1;
    if ((*(uint *)(*DAT_001a1cdc + 0x10) & 3) == 0) {
      uVar3 = (uint)((char)param_1[0x488] == '\0');
    }
    if ((int)(char)param_1[0x488] != uVar3) {
      func_001A094C((int)param_1,uVar3);
    }
  }
  else {
    func_001A094C((int)param_1,1);
  }
  if (*(char *)((int)param_1 + 0x121e) == '\x03') {
    iVar4 = func_0058A8F0((int)param_1);
    if (iVar4 != 0) {
      return func_001A1040((int)param_1,4);
    }
  }
  else {
    local_54 = s_SE_DegTail_ROLL_001a1ce0;
    local_58 = iVar4;
    func_001507D8((int)param_1,&local_58,0);
    func_00115C70(local_44,(float *)(param_1 + 0xf4),(float *)(param_1 + 0x45e));
    iVar4 = DAT_001a1cf4;
    if (fVar9 < ALBW_AS_F32(param_1[0x484])) {
      fVar6 = ALBW_AS_F32(param_1[0x484]) * DAT_001a1cf0;
      param_1[0x484] = (int)ALBW_AS_U32(fVar6);
      if ((int)ALBW_AS_U32(fVar6) < iVar4) {
        param_1[0x484] = (int)ALBW_AS_U32(fVar9);
      }
    }
    if ((ALBW_AS_F32(param_1[0x484]) == fVar9) &&
       ((int)ALBW_AS_U32((local_44[0] * local_44[0] + local_3c * local_3c)) < 0x3f800001)) {
      iVar4 = DAT_001a1cf8 + param_1[0xfa];
      param_1[0xfa] = iVar4;
      param_1[0x471] = iVar4;
      uVar3 = param_1[0x475];
      if (uVar3 < (uint)param_1[0x476]) {
        param_1[0x475] = uVar3 + 1;
      }
      if ((uint)param_1[0x476] <= (uint)param_1[0x475]) {
        pfVar2 = (float *)func_00520FC0();
        func_00115C70(afStack_38,pfVar2,(float *)(param_1 + 0xf4));
        local_4c[0] = func_0068C690(afStack_38);
        local_4c[0] = param_1[0xfa] - local_4c[0];
        uVar3 = func_0058E2B8(local_4c);
        if (uVar3 <= *DAT_001a1cfc) {
          param_1[0x471] = param_1[0xfa];
          func_001A094C((int)param_1,1);
          *(undefined1 *)((int)param_1 + 0x121d) = 0x32;
          iVar4 = 0;
          do {
            piVar5 = param_1 + iVar4 * 4 + 0x2cd;
            iVar7 = param_1[0xf5];
            iVar8 = param_1[0xf6];
            iVar4 = iVar4 + 1;
            *piVar5 = param_1[0xf4];
            piVar5[1] = iVar7;
            piVar5[2] = iVar8;
            piVar5[3] = param_1[0xfa];
          } while (iVar4 != 100);
          param_1[0x484] = DAT_001a1d00;
          func_004FC570(param_1);
          iVar4 = 0;
          do {
            iVar7 = iVar4 + 1;
            *(undefined2 *)(param_1[iVar4 * 0x12 + 0x291] + 0x30) =
                 *(undefined2 *)(param_1[0x108] + 0x30);
            *(undefined1 *)(param_1[iVar4 * 0x12 + 0x291] + 0x22) = 2;
            iVar4 = iVar7;
          } while (iVar7 != 4);
          func_0065A330(param_1 + 0x274,2);
        }
      }
    }
  }
  return 0;
}

