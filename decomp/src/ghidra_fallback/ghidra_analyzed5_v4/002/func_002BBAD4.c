#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float *DAT_002bbbf0;
extern float DAT_002bbbf4;

// USA 002BBAD4 <- EU 002BBAB0 (Ghidra, non-matching)
// GLOBAL DAT_002bbbf0 float *
// GLOBAL DAT_002bbbf4 float

void func_002BBAD4(int param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  if (*(short *)(param_1 + 0x910) == 0) {
    local_28 = *DAT_002bbbf0;
    fStack_24 = DAT_002bbbf0[1];
    fStack_20 = DAT_002bbbf0[2];
    pfVar1 = (float *)func_00520FC0();
    func_00115C70(&local_28,pfVar1,(float *)(param_1 + 0x3d0));
    iVar2 = func_0068C690(&local_28);
    uVar3 = iVar2 + 0x20000000U >> 0x1e;
    if (*(short *)(param_1 + 0x90e) == 1) {
      if ((uVar3 == 3) || (uVar3 == 1)) {
        fVar5 = DAT_002bbbf4;
        iVar2 = func_00520FC0();
        fVar4 = *(float *)(param_1 + 0x3d8) - *(float *)(iVar2 + 8);
        if (fVar4 <= fVar5) {
          fVar4 = -fVar4;
        }
        if (0x3f800000 < (int)ALBW_AS_U32(fVar4)) {
          iVar2 = func_00520FC0();
          if (*(float *)(iVar2 + 8) < *(float *)(param_1 + 0x3d8)) {
            uVar3 = 2;
          }
          else {
            uVar3 = 0;
          }
        }
      }
    }
    else if ((*(short *)(param_1 + 0x90e) == 2) && (uVar3 == 0 || uVar3 == 2)) {
      fVar5 = DAT_002bbbf4;
      pfVar1 = (float *)func_00520FC0();
      fVar4 = *(float *)(param_1 + 0x3d0) - *pfVar1;
      if (fVar4 <= fVar5) {
        fVar4 = -fVar4;
      }
      if (0x3f800000 < (int)ALBW_AS_U32(fVar4)) {
        pfVar1 = (float *)func_00520FC0();
        if (*pfVar1 < *(float *)(param_1 + 0x3d0)) {
          uVar3 = 3;
        }
        else {
          uVar3 = 1;
        }
      }
    }
    *(uint *)(param_1 + 0x8f8) = uVar3 << 0x1e;
  }
  return;
}

