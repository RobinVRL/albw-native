#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_002ABDB0(int param_1,int param_2);
extern int func_002B1470(undefined4 *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FB0D8(int param_1,float *param_2);
extern float DAT_002ab5c4;
extern float DAT_002ab5c8;
extern float DAT_002ab5cc;
extern int DAT_002ab5d0;
extern int DAT_002ab5d4;
extern int DAT_002ab5d8;
extern int DAT_002ab5dc;
extern undefined DAT_002ab5e0;
extern int DAT_002ab5f4;
extern char s_L333_SE_EN_FAINT_002ab5e3[];
extern undefined4 _DAT_002ab5e0;

// USA 002AB3E0 <- EU 002AB3BC (Ghidra, non-matching)
// GLOBAL DAT_002ab5c4 float
// GLOBAL DAT_002ab5c8 float
// GLOBAL DAT_002ab5cc float
// GLOBAL DAT_002ab5d0 int
// GLOBAL DAT_002ab5d4 int
// GLOBAL DAT_002ab5d8 int
// GLOBAL DAT_002ab5dc int
// GLOBAL DAT_002ab5e0 undefined
// GLOBAL DAT_002ab5f4 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002AB3E0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (((uint)param_1[0x9a] < (uint)param_1[0x9b]) &&
     (iVar1 = func_002B1470(param_1), fVar4 = ALBW_AS_F32(_DAT_002ab5e0), iVar1 == 0)) {
    uVar2 = param_1[0x9b];
    fVar5 = DAT_002ab5c8;
    if ((uVar2 != 0) &&
       ((uVar3 = param_1[0x9a], uVar3 != 0 && (fVar5 = DAT_002ab5cc, uVar3 < uVar2)))) {
      fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = fVar5 * ALBW_AS_F32(param_1[0x9c]);
    }
    fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    iVar1 = DAT_002ab5d4;
    if (-1 < *(char *)(DAT_002ab5d0 + param_1[0xd])) {
      iVar1 = *(char *)(DAT_002ab5d0 + param_1[0xd]) * DAT_002ab5d8;
    }
    fVar7 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)ALBW_AS_U32(fVar5) < DAT_002ab5dc) {
      iVar1 = (int)((DAT_002ab5c4 - fVar5) * fVar6);
      if (iVar1 < 2) {
        iVar1 = 1;
      }
      fVar5 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0x9d] =
           ALBW_AS_U32(ALBW_AS_F32(param_1[0x9d]) + (DAT_002ab5cc - ALBW_AS_F32(param_1[0x9d])) * (DAT_002ab5cc / fVar5));
    }
    else if ((int)(*(undefined4 *)((char *)&s_L333_SE_EN_FAINT_002ab5e3 + 1)) < (int)ALBW_AS_U32(fVar5)) {
      iVar1 = (int)((DAT_002ab5cc - fVar5) * fVar6);
      if (iVar1 < 2) {
        iVar1 = 1;
      }
      fVar5 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0x9d] =
           ALBW_AS_U32(ALBW_AS_F32(param_1[0x9d]) + (DAT_002ab5c8 - ALBW_AS_F32(param_1[0x9d])) * (DAT_002ab5cc / fVar5));
    }
    else {
      param_1[0x9d] = ALBW_AS_U32(DAT_002ab5cc);
    }
    param_1[0x9e] = param_1[0x9e] - (int)(ALBW_AS_F32(param_1[0x9d]) * fVar4);
    param_1[0x9f] = (int)(ALBW_AS_F32(param_1[0x9d]) * fVar7);
    if ((uint)param_1[0x9a] < (uint)param_1[0x9b]) {
      param_1[0x9a] = param_1[0x9a] + 1;
    }
    iVar1 = param_1[0xd];
    if (((*(char *)(iVar1 + 0x7fc) != '\x02') && ((*(uint *)(iVar1 + 0x59c) & 0x10) != 0)) &&
       (*(char *)(iVar1 + 0x77f) == '\0')) {
      fVar4 = func_004F898C();
      func_004F8964((float *)(param_1 + 0x10),1,fVar4);
      func_004FB0D8(param_1[0xd],(float *)(param_1 + 0x10));
    }
    if ((uint)param_1[0x9b] <= (uint)param_1[0x9a]) {
      return func_002ABDB0((int)param_1,0);
    }
    local_c = s_L333_SE_EN_FAINT_002ab5e3 + 5;
    local_10 = DAT_002ab5f4;
    func_001507D8(param_1[0xd],&local_10,0);
  }
  return 0;
}

