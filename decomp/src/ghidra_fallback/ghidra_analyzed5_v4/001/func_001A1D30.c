#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001A1040(int param_1,uint param_2);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_004FC570();
extern int func_00521078(int param_1);
extern int func_00539200(int param_1);
extern int func_0065A330(undefined4 *param_1,undefined1 param_2);
extern float DAT_001a1fd0;
extern int DAT_001a1fd4;
extern float DAT_001a2010;
extern float DAT_001a2014;
extern float DAT_001a2030;
extern float DAT_001a2034;
extern undefined DAT_001a2038;
extern char s_SE_DegTail_FAINT_001a1fec[];
extern char s_SE_DegTail_LAND_001a2000[];
extern char s_SE_DegTail_LAND_PARTS_S_001a2018[];
extern char s_SE_DegTail_LAND_S_001a1fd8[];
extern char s__SE_DegTail_LAND_PARTS_001a203b[];
extern undefined4 _DAT_001a2038;

// USA 001A1D30 <- EU 001A1D30 (Ghidra, non-matching)
// GLOBAL DAT_001a1fd0 float
// GLOBAL DAT_001a1fd4 int
// GLOBAL DAT_001a2010 float
// GLOBAL DAT_001a2014 float
// GLOBAL DAT_001a2030 float
// GLOBAL DAT_001a2034 float
// GLOBAL DAT_001a2038 undefined
// GLOBAL s_SE_DegTail_FAINT_001a1fec string
// GLOBAL s_SE_DegTail_LAND_001a2000 string
// GLOBAL s_SE_DegTail_LAND_PARTS_S_001a2018 string
// GLOBAL s_SE_DegTail_LAND_S_001a1fd8 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_001A1D30(int *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(int *)(albw_frame + 0x0))
  #define local_8c (*(char * *)(albw_frame + 0x4))
  #define local_30 (*(int *)(albw_frame + 0x60))
  #define local_2c (*(char * *)(albw_frame + 0x64))
  bVar2 = func_00521078((int)param_1);
  iVar1 = DAT_001a1fd4;
  fVar8 = DAT_001a1fd0;
  if (bVar2) {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(DAT_001a1fd0 <= ALBW_AS_F32(param_1[0xf8])) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      param_1[0xf8] = (int)ALBW_AS_U32(DAT_001a1fd0);
      if (*(char *)((int)param_1 + 0x1221) == '\0') {
        func_001A1040((int)param_1,5);
        local_8c = s_SE_DegTail_FAINT_001a1fec;
        local_90 = iVar1;
        func_00150A84(param_1,&local_90,0);
        local_8c = s_SE_DegTail_LAND_001a2000;
        local_90 = iVar1;
        func_00150A84(param_1,&local_90,0);
      }
      else {
        local_8c = s_SE_DegTail_LAND_S_001a1fd8;
        local_90 = iVar1;
        func_00150A84(param_1,&local_90,0);
      }
      *(undefined1 *)((int)param_1 + 0x1222) = 1;
      param_1[0x2cc] = 0;
    }
  }
  else if (*(char *)((int)param_1 + 0x1222) == '\0') {
    in_fpscr = in_fpscr & 0xfffffff |
               (uint)(DAT_001a2014 <= ALBW_AS_F32(param_1[0xf8]) - DAT_001a2010) << 0x1d;
    fVar7 = ALBW_AS_F32(param_1[0xf8]) - DAT_001a2010;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar7 = DAT_001a2014;
    }
    param_1[0xf8] = (int)ALBW_AS_U32(fVar7);
  }
  uVar3 = param_1[0x47b];
  if (uVar3 < (uint)param_1[0x47c]) {
    param_1[0x47b] = uVar3 + 1;
  }
  if (((uint)param_1[0x47c] <= (uint)param_1[0x47b]) && (*(char *)((int)param_1 + 0x1222) != '\0'))
  {
    *(undefined1 *)((int)param_1 + 0x121d) = 8;
    param_1[0x46d] = param_1[0x46e];
    param_1[0x47b] = 0;
    *(undefined1 *)((int)param_1 + 0x1221) = 0;
    func_004FC570(param_1);
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 1;
      *(undefined2 *)(param_1[iVar4 * 0x12 + 0x291] + 0x30) = *(undefined2 *)(param_1[0x108] + 0x30)
      ;
      *(undefined1 *)(param_1[iVar4 * 0x12 + 0x291] + 0x22) = 2;
      iVar4 = iVar5;
    } while (iVar5 != 4);
    param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
    func_0065A330(param_1 + 0x274,2);
  }
  uVar3 = param_1[0x2cc];
  if (-1 < (int)uVar3) {
    if (4 < uVar3) {
      uVar3 = 4;
    }
    piVar6 = param_1 + uVar3 * 0x12 + 0x284;
    uVar3 = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(piVar6[1]) == ALBW_AS_F32(param_1[0xf5])) << 0x1e;
    if (SUB41(uVar3 >> 0x1e,0)) {
      func_0010A464(&local_90);
      local_30 = iVar1;
      if (*(char *)((int)param_1 + 0x1221) == '\0') {
        local_2c = s__SE_DegTail_LAND_PARTS_001a203b + 1;
        func_0014DBF4(param_1,&local_30,piVar6,(int)&local_90);
      }
      else {
        local_2c = s_SE_DegTail_LAND_PARTS_S_001a2018;
        func_0014DBF4(param_1,&local_30,piVar6,(int)&local_90);
      }
      bVar2 = func_00539200((int)&local_90);
      if (bVar2) {
        fVar8 = (float)VectorSignedToFloat(param_1[0x2cc],(byte)(uVar3 >> 0x15) & 3);
        fVar8 = DAT_001a2034 - fVar8 * DAT_001a2030;
        if (fVar8 < ALBW_AS_F32(_DAT_001a2038)) {
          fVar8 = ALBW_AS_F32(_DAT_001a2038);
        }
        func_0025B860((int)&local_90,0,fVar8,ALBW_AS_F32(_DAT_001a2038));
      }
      if (param_1[0x2cc] == 3) {
        param_1[0x2cc] = -1;
      }
      else {
        param_1[0x2cc] = param_1[0x2cc] + 1;
      }
      func_0025B874(&local_90);
    }
  }
  return;
}

