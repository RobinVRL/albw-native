// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00520FC0(void);
extern int func_00521098(undefined4 param_1,int *param_2);
extern int func_00556A90();
extern int func_00556EAC(int param_1,int param_2);
extern float DAT_0050c5c8;
extern int *DAT_0050c5cc;
extern float *DAT_0050c5d0;
extern undefined4 *DAT_0050c5d4;

// USA 0050C4B0 <- EU 0050C488 (Ghidra, non-matching)
// GLOBAL DAT_0050c5c8 float
// GLOBAL DAT_0050c5cc int *
// GLOBAL DAT_0050c5d0 float *
// GLOBAL DAT_0050c5d4 undefined4 *

void func_0050C4B0(int param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((float *)(albw_frame + 0x8))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define fStack_20 (*(float *)(albw_frame + 0x20))
  #define local_1c (*(float *)(albw_frame + 0x24))
  if ((((*(char *)(param_1 + 0x450) == '\0') &&
       (bVar4 = func_00521098(param_1,param_2), piVar3 = DAT_0050c5cc, bVar4)) &&
      ((**(int **)(*(int *)(param_1 + 0x410) + 0x14) != 1 ||
       (in_fpscr = in_fpscr & 0xfffffff |
                   (uint)(*(float *)(*(int *)(*(int *)(param_1 + 0x410) + 0x14) + 8) == DAT_0050c5c8
                         ) << 0x1e, SUB41(in_fpscr >> 0x1e,0))))) &&
     ((fVar8 = DAT_0050c5c8, iVar5 = func_00556A90(*DAT_0050c5cc),
      iVar5 == *(int *)(param_1 + 0x2cc) && (bVar4 = func_00556EAC(*piVar3,0x14), !bVar4)))) {
    iVar5 = *(int *)(param_1 + 0x424);
    pfVar6 = (float *)func_00520FC0();
    func_00115C70(local_38,pfVar6,(float *)(param_1 + 0x3d0));
    local_24 = *DAT_0050c5d0;
    fStack_20 = DAT_0050c5d0[1];
    local_1c = DAT_0050c5d0[2];
    func_004D7F70(&local_24,*(uint *)(param_1 + 1000));
    fVar7 = local_38[0] * local_24 + local_30 * local_1c;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar8) << 0x1f | (uint)(fVar7 == fVar8) << 0x1e |
            (uint)(fVar8 <= fVar7) << 0x1d;
    bVar2 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar7) || NAN(fVar8))) {
      if (!(bool)(bVar2 >> 5 & 1)) {
        *(undefined4 *)(param_1 + 0x424) = *DAT_0050c5d4;
      }
    }
    else {
      fVar8 = (float)VectorSignedToFloat(*DAT_0050c5d4,(byte)(uVar1 >> 0x15) & 3);
      *(int *)(param_1 + 0x424) = (int)-fVar8;
    }
    if (*(int *)(param_1 + 0x424) != iVar5) {
      *(undefined1 *)(param_1 + 0x428) = 0;
      *(undefined1 *)(param_1 + 0x429) = 0;
    }
  }
  return;
}

