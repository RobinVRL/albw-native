#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_0021f760;
extern float DAT_0021f764;
extern float DAT_0021f768;
extern float DAT_0021f76c;
extern undefined4 *DAT_0021f770;
extern int DAT_0021f774;

// USA 0021F564 <- EU 0021F564 (Ghidra, non-matching)
// GLOBAL DAT_0021f760 float
// GLOBAL DAT_0021f764 float
// GLOBAL DAT_0021f768 float
// GLOBAL DAT_0021f76c float
// GLOBAL DAT_0021f770 undefined4 *
// GLOBAL DAT_0021f774 int

uint func_0021F564(int param_1)

{
  bool bVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  uVar2 = (uint)*(byte *)(param_1 + 0x8c4);
  switch(uVar2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 0x15:
    bVar1 = func_0051D27C((int *)(param_1 + 1000),0,DAT_0021f774);
    return (uint)bVar1;
  case 10:
    if (*(uint *)(param_1 + 0xa68) != 0) {
      return *(uint *)(param_1 + 0xa68);
    }
  case 5:
  case 8:
  case 9:
  case 0x11:
  case 0x13:
    fVar6 = DAT_0021f760;
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(&local_20,pfVar3,(float *)(param_1 + 0x3d0));
    iVar4 = func_0068C690(&local_20);
    fVar5 = (float)VectorSignedToFloat(iVar4 - *(int *)(param_1 + 1000),(byte)(in_fpscr >> 0x15) & 3
                                      );
    uVar2 = (uint)(fVar5 * fVar6);
    *(uint *)(param_1 + 0x4fc) = uVar2;
    break;
  case 0xc:
    uVar2 = *(uint *)(param_1 + 0xa68);
    if (uVar2 == 0x3c) {
      pfVar3 = (float *)func_00520FC0();
      func_00115C70(&local_20,pfVar3,(float *)(param_1 + 0x3d0));
      iVar4 = func_0068C690(&local_20);
      uVar2 = *(int *)(param_1 + 1000) - iVar4;
      if ((int)uVar2 < 1) {
        *(undefined1 *)(param_1 + 0xb01) = 0;
      }
      else {
        uVar2 = 1;
        *(undefined1 *)(param_1 + 0xb01) = 1;
      }
      return uVar2;
    }
    if (0x3c < uVar2) {
      pfVar3 = (float *)func_00520FC0();
      func_00115C70(&local_20,pfVar3,(float *)(param_1 + 0x3d0));
      fVar6 = (local_20 * local_20 + local_1c * local_1c + fStack_18 * fStack_18) * DAT_0021f764;
      if (DAT_0021f768 < fVar6) {
        fVar6 = DAT_0021f768;
      }
      uVar2 = in_fpscr & 0xfffffff | (uint)(DAT_0021f76c <= DAT_0021f768 - fVar6) << 0x1d;
      fVar6 = DAT_0021f768 - fVar6;
      if (!SUB41(uVar2 >> 0x1d,0)) {
        fVar6 = DAT_0021f76c;
      }
      fVar5 = (float)VectorSignedToFloat(*DAT_0021f770,(byte)(uVar2 >> 0x15) & 3);
      iVar4 = (int)(fVar5 * fVar6);
      if (*(char *)(param_1 + 0xb01) != '\0') {
        iVar4 = -iVar4;
      }
      uVar2 = *(int *)(param_1 + 1000) + iVar4;
      *(uint *)(param_1 + 1000) = uVar2;
      return uVar2;
    }
  }
  return uVar2;
}

