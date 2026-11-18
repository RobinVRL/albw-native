#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0066B580(undefined4 *param_1,undefined1 param_2);
extern float DAT_0050ab04;
extern int DAT_0050ab08;
extern float DAT_0050ab0c;
extern float DAT_0050ab10;
extern float DAT_0050ab14;

// GLOBAL DAT_0050ab04 float
// GLOBAL DAT_0050ab08 int
// GLOBAL DAT_0050ab0c float
// GLOBAL DAT_0050ab10 float
// GLOBAL DAT_0050ab14 float
// USA 0050A958 <- EU 0050A934 (Ghidra, function missing from the decomp table)

/* WARNING: Removing unreachable block (ram,0x0050a9c4) */
/* WARNING: Removing unreachable block (ram,0x0050a9c8) */
/* WARNING: Removing unreachable block (ram,0x0050a9dc) */
/* WARNING: Removing unreachable block (ram,0x0050aa58) */
/* WARNING: Removing unreachable block (ram,0x0050aa5c) */
/* WARNING: Removing unreachable block (ram,0x0050aa6c) */

undefined4 func_0050A958(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  func_00169A80(*(int **)(param_1 + 0x410),param_2,param_3,param_4);
  func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
  fVar4 = DAT_0050ab0c;
  fVar3 = DAT_0050ab04;
  if (*(short *)(param_1 + 0x2c) == 1) {
    fVar3 = (*(float *)(DAT_0050ab08 + 4) / *(float *)(DAT_0050ab08 + -0x14)) * DAT_0050ab04;
  }
  pfVar1 = (float *)(param_1 + 0x458);
  fVar3 = *pfVar1 + fVar3;
  if ((DAT_0050ab0c <= fVar3) || (fVar3 < *pfVar1)) {
    *pfVar1 = DAT_0050ab0c;
  }
  else {
    *pfVar1 = fVar3;
  }
  if (*(char *)(param_1 + 0x467) == '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      if (*(float *)(iVar2 + 0x10) < fVar4) {
        if (fVar4 < *(float *)(iVar2 + 8)) {
          return 0;
        }
      }
      else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
        return 0;
      }
      if ((*(char *)(param_1 + 0x465) != '\0') && (*(char *)(param_1 + 0x466) == '\0')) {
        return func_0066B580((undefined4 *)(param_1 + 0x418),2);
      }
      goto LAB_0050aa7c;
    }
  }
  else {
    pfVar1 = (float *)(param_1 + 0x45c);
    fVar4 = *pfVar1 + DAT_0050ab10;
    if ((DAT_0050ab14 <= fVar4) || (fVar4 < *pfVar1)) {
      *pfVar1 = DAT_0050ab14;
LAB_0050aa7c:
      return func_0066B580((undefined4 *)(param_1 + 0x418),0);
    }
    *pfVar1 = fVar4;
  }
  return 0;
}

