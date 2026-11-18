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

// USA 002AB3DC <- EU 002AB3B8 (Ghidra, non-matching)
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

undefined4 func_002AB3DC(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  if ((*(uint *)(param_1 + 0x268) < *(uint *)(param_1 + 0x26c)) &&
     (iVar1 = func_002B1470((undefined4 *)param_1), fVar5 = ALBW_AS_F32(_DAT_002ab5e0), iVar1 == 0)) {
    uVar2 = *(uint *)(param_1 + 0x26c);
    fVar6 = DAT_002ab5c8;
    if ((uVar2 != 0) &&
       ((uVar4 = *(uint *)(param_1 + 0x268), uVar4 != 0 && (fVar6 = DAT_002ab5cc, uVar4 < uVar2))))
    {
      fVar6 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar6 = fVar6 * *(float *)(param_1 + 0x270);
    }
    iVar3 = (int)*(char *)(DAT_002ab5d0 + *(int *)(param_1 + 0x34));
    fVar7 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    iVar1 = DAT_002ab5d4;
    if (-1 < iVar3) {
      iVar1 = iVar3 * DAT_002ab5d8;
    }
    fVar8 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)ALBW_AS_U32(fVar6) < DAT_002ab5dc) {
      iVar1 = (int)((DAT_002ab5c4 - fVar6) * fVar7);
      if (iVar1 < 2) {
        iVar1 = 1;
      }
      fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x274) =
           *(float *)(param_1 + 0x274) +
           (DAT_002ab5cc - *(float *)(param_1 + 0x274)) * (DAT_002ab5cc / fVar6);
    }
    else if ((int)(*(undefined4 *)((char *)&s_L333_SE_EN_FAINT_002ab5e3 + 1)) < (int)ALBW_AS_U32(fVar6)) {
      iVar1 = (int)((DAT_002ab5cc - fVar6) * fVar7);
      if (iVar1 < 2) {
        iVar1 = 1;
      }
      fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x274) =
           *(float *)(param_1 + 0x274) +
           (DAT_002ab5c8 - *(float *)(param_1 + 0x274)) * (DAT_002ab5cc / fVar6);
    }
    else {
      *(float *)(param_1 + 0x274) = DAT_002ab5cc;
    }
    *(int *)(param_1 + 0x278) =
         *(int *)(param_1 + 0x278) - (int)(*(float *)(param_1 + 0x274) * fVar5);
    *(int *)(param_1 + 0x27c) = (int)(*(float *)(param_1 + 0x274) * fVar8);
    if (*(uint *)(param_1 + 0x268) < *(uint *)(param_1 + 0x26c)) {
      *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) + 1;
    }
    iVar1 = *(int *)(param_1 + 0x34);
    if (((*(char *)(iVar1 + 0x7fc) != '\x02') && ((*(uint *)(iVar1 + 0x59c) & 0x10) != 0)) &&
       (*(char *)(iVar1 + 0x77f) == '\0')) {
      fVar5 = func_004F898C();
      func_004F8964((float *)(param_1 + 0x40),1,fVar5);
      func_004FB0D8(*(int *)(param_1 + 0x34),(float *)(param_1 + 0x40));
    }
    if (*(uint *)(param_1 + 0x26c) <= *(uint *)(param_1 + 0x268)) {
      return func_002ABDB0(param_1,0);
    }
    pcStack_c = s_L333_SE_EN_FAINT_002ab5e3 + 5;
    iStack_10 = DAT_002ab5f4;
    func_001507D8(*(int *)(param_1 + 0x34),&iStack_10,0);
  }
  return 0;
}

