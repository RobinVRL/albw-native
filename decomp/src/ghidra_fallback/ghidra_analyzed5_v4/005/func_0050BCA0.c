// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00556A90();
extern int func_0066B6C4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0050be00;
extern int DAT_0050be04;
extern int *DAT_0050be08;
extern float *DAT_0050be0c;
extern float DAT_0050be10;
extern undefined4 *DAT_0050be14;

// USA 0050BCA0 <- EU 0050BC78 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_0050be00 int *
// GLOBAL DAT_0050be04 int
// GLOBAL DAT_0050be08 int *
// GLOBAL DAT_0050be0c float *
// GLOBAL DAT_0050be10 float
// GLOBAL DAT_0050be14 undefined4 *

undefined4 func_0050BCA0(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_30 (*(float *)(albw_frame + 0x0))
  #define fStack_2c (*(float *)(albw_frame + 0x4))
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define afStack_24 ((float *)(albw_frame + 0xc))
  #define fStack_1c (*(float *)(albw_frame + 0x14))
  #define fStack_18 (*(float *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  #define fStack_10 (*(float *)(albw_frame + 0x20))
  if ((*(int *)(param_2 + 0x2c) != 0) && (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x02')) {
    fStack_18 = *(float *)(param_2 + 0x10);
    uStack_14 = *(undefined4 *)(param_2 + 0x14);
    fStack_10 = *(float *)(param_2 + 0x18);
    iVar3 = func_0052FBA0(*DAT_0050be00 + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if (iVar3 != 0) {
      fStack_10 = *(float *)(iVar3 + 0x3d8);
      fStack_18 = *(float *)(iVar3 + 0x3d0);
      uStack_14 = *(undefined4 *)(iVar3 + 0x3d4);
    }
    fVar4 = *(float *)(param_1 + 0x3d0) - fStack_18;
    fVar5 = *(float *)(param_1 + 0x3d8) - fStack_10;
    if ((int)ALBW_AS_U32((fVar4 * fVar4 + fVar5 * fVar5)) < DAT_0050be04) {
      func_0066B6C4((undefined4 *)(param_1 + 0x44c),1);
      return 1;
    }
    if ((*(char *)(param_1 + 0x450) == '\0') &&
       (iVar3 = func_00556A90(*DAT_0050be08), iVar3 != *(int *)(param_1 + 0x2cc))) {
      iVar3 = *(int *)(param_1 + 0x424);
      func_00115C70(afStack_24,&fStack_18,(float *)(param_1 + 0x3d0));
      fStack_30 = *DAT_0050be0c;
      fStack_2c = DAT_0050be0c[1];
      fStack_28 = DAT_0050be0c[2];
      func_004D7F70(&fStack_30,*(uint *)(param_1 + 1000));
      fVar4 = afStack_24[0] * fStack_30 + fStack_1c * fStack_28;
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar4 < DAT_0050be10) << 0x1f |
              (uint)(fVar4 == DAT_0050be10) << 0x1e | (uint)(DAT_0050be10 <= fVar4) << 0x1d;
      bVar2 = (byte)(uVar1 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar4) || NAN(DAT_0050be10))) {
        if (!(bool)(bVar2 >> 5 & 1)) {
          *(undefined4 *)(param_1 + 0x424) = *DAT_0050be14;
        }
      }
      else {
        fVar4 = (float)VectorSignedToFloat(*DAT_0050be14,(byte)(uVar1 >> 0x15) & 3);
        *(int *)(param_1 + 0x424) = (int)-fVar4;
      }
      if (*(int *)(param_1 + 0x424) != iVar3) {
        *(undefined1 *)(param_1 + 0x428) = 0;
        *(undefined1 *)(param_1 + 0x429) = 0;
      }
    }
  }
  return 0;
}

