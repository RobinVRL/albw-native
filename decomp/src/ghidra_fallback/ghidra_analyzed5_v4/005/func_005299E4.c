#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00589A74(int param_1);
extern float DAT_00529a90;
extern int *DAT_00529a94;
extern float DAT_00529a98;
extern undefined4 DAT_00529a9c;

// USA 005299E4 <- EU 005299BC (Ghidra, non-matching)
// GLOBAL DAT_00529a90 float
// GLOBAL DAT_00529a94 int *
// GLOBAL DAT_00529a98 float
// GLOBAL DAT_00529a9c undefined4

undefined4 func_005299E4(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define fStack_18 (*(float *)(albw_frame + 0x18))
  #define fStack_14 (*(float *)(albw_frame + 0x1c))
  pfVar2 = *(float **)(*DAT_00529a94 + 0x1c);
  if ((pfVar2[1] < *(float *)(param_1 + 0x3d4) - DAT_00529a90) && (*(int *)(param_1 + 0x410) != 0))
  {
    pfVar1 = (float *)func_00589A74(*(int *)(param_1 + 0x410));
    local_28 = DAT_00529a98;
    uStack_24 = DAT_00529a9c;
    local_20 = DAT_00529a98;
    func_00115C54(&local_1c,pfVar2,&local_28);
    if (*pfVar1 <= local_1c) {
      bVar3 = local_1c == pfVar1[3];
      bVar4 = pfVar1[3] <= local_1c;
      if (!bVar4 || bVar3) {
        bVar3 = pfVar1[1] == fStack_18;
        bVar4 = fStack_18 <= pfVar1[1];
      }
      if (!bVar4 || bVar3) {
        bVar3 = fStack_18 == pfVar1[4];
        bVar4 = pfVar1[4] <= fStack_18;
        if (!bVar4 || bVar3) {
          bVar3 = pfVar1[2] == fStack_14;
          bVar4 = fStack_14 <= pfVar1[2];
        }
        if ((!bVar4 || bVar3) && (fStack_14 <= pfVar1[5])) {
          return 1;
        }
      }
    }
  }
  return 0;
}

