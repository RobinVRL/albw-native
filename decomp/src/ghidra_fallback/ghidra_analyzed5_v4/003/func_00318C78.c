#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00234D98(int param_1);
extern int func_00390098(int param_1,float *param_2);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00665160(undefined4 *param_1,undefined1 param_2);
extern float DAT_00318f50;
extern float DAT_00318f54;
extern int *DAT_00318f58;
extern float DAT_00318f5c;
extern float DAT_00318f60;
extern float DAT_00318f64;
extern float DAT_00318f68;
extern float DAT_00318f6c;
extern int DAT_00318f70;
extern float DAT_00318f74;

// USA 00318C78 <- EU 00318C54 (Ghidra, non-matching)
// GLOBAL DAT_00318f50 float
// GLOBAL DAT_00318f54 float
// GLOBAL DAT_00318f58 int *
// GLOBAL DAT_00318f5c float
// GLOBAL DAT_00318f60 float
// GLOBAL DAT_00318f64 float
// GLOBAL DAT_00318f68 float
// GLOBAL DAT_00318f6c float
// GLOBAL DAT_00318f70 int
// GLOBAL DAT_00318f74 float

/* WARNING: Removing unreachable block (ram,0x00318ca8) */
/* WARNING: Removing unreachable block (ram,0x00318cac) */
/* WARNING: Removing unreachable block (ram,0x00318cb0) */
/* WARNING: Removing unreachable block (ram,0x00318cc0) */

undefined4 func_00318C78(int param_1)

{
  int *piVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x20))
  pfVar3 = (float *)(param_1 + 0x4c8);
  fVar5 = *pfVar3 + DAT_00318f50;
  if ((DAT_00318f54 <= fVar5) || (fVar5 < *pfVar3)) {
    bVar2 = true;
    *pfVar3 = DAT_00318f54;
  }
  else {
    bVar2 = false;
    *pfVar3 = fVar5;
  }
  piVar1 = DAT_00318f58;
  *(undefined4 *)(*(int *)(param_1 + 0x410) + 0x158) = *(undefined4 *)(param_1 + 0x4c8);
  if ((bVar2) &&
     (iVar4 = *(int *)(*(int *)(param_1 + 0x414) + 0x14), *(char *)(iVar4 + 0x1c) == '\0')) {
    if (*(float *)(iVar4 + 0x10) < DAT_00318f5c) {
      if (*(float *)(iVar4 + 8) <= DAT_00318f5c) goto LAB_00318d4c;
    }
    else if (*(float *)(iVar4 + 8) == *(float *)(iVar4 + 0x14)) {
LAB_00318d4c:
      pfVar3 = (float *)(param_1 + 0x4cc);
      fVar5 = *pfVar3;
      if (DAT_00318f64 < DAT_00318f60 - fVar5) {
        fVar5 = fVar5 + DAT_00318f64;
LAB_00318d8c:
        *pfVar3 = fVar5;
      }
      else {
        if (DAT_00318f60 - fVar5 < DAT_00318f68) {
          fVar5 = fVar5 - DAT_00318f64;
          goto LAB_00318d8c;
        }
        *pfVar3 = DAT_00318f60;
      }
      iVar4 = DAT_00318f70;
      local_30 = *(float *)(param_1 + 0x3d0);
      uStack_2c = *(undefined4 *)(param_1 + 0x3d4);
      uStack_28 = *(undefined4 *)(param_1 + 0x3d8);
      fVar6 = *(float *)(param_1 + 0x3d4);
      fVar5 = *(float *)(param_1 + 0x4cc);
      if (fVar5 < DAT_00318f6c - fVar6) {
        fVar6 = fVar6 + fVar5;
      }
      else {
        if (-fVar5 <= DAT_00318f6c - fVar6) {
          *(float *)(param_1 + 0x3d4) = DAT_00318f6c;
          if (*(char *)(param_1 + 0x4dc) == '\0') {
            iVar4 = iVar4 + *(int *)(param_1 + 1000);
            *(int *)(param_1 + 1000) = iVar4;
            if (iVar4 < 0) {
              *(undefined1 *)(param_1 + 0x4dc) = 1;
            }
          }
          else {
            bVar2 = func_0051D27C((int *)(param_1 + 1000),0,iVar4);
            if (bVar2) {
              func_00665160((undefined4 *)(param_1 + 0x49c),2);
            }
          }
          goto LAB_00318e20;
        }
        fVar6 = fVar6 - fVar5;
      }
      *(float *)(param_1 + 0x3d4) = fVar6;
      *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) + iVar4;
LAB_00318e20:
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = func_0052FBA0(iVar4 + 0x3dbbc,*(uint *)(param_1 + 0x52c));
      if (iVar4 == 0) {
        return 0;
      }
      func_00115C70(&local_18,(float *)(param_1 + 0x3d0),&local_30);
      local_24 = local_18;
      uStack_20 = uStack_14;
      uStack_1c = uStack_10;
      return func_00390098(iVar4,&local_24);
    }
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x414) + 0x14);
  fVar5 = *(float *)(iVar4 + 0xc);
  if (*(float *)(iVar4 + 8) < fVar5) {
    if (((fVar5 < *(float *)(iVar4 + 0x14)) && (fVar5 < DAT_00318f74)) &&
       (DAT_00318f74 <= *(float *)(iVar4 + 0x14))) goto LAB_00318f18;
  }
  else if (DAT_00318f74 <= fVar5) {
    return 0;
  }
  if (*(float *)(iVar4 + 8) < DAT_00318f74) {
    return 0;
  }
LAB_00318f18:
  if ((0 < *(short *)(param_1 + 0x5e)) &&
     (iVar4 = func_0052FBDC(*piVar1 + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),0), iVar4 != 0)) {
    return func_00234D98(iVar4);
  }
  return 0;
}

