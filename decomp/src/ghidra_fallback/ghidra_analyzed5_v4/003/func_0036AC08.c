// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0025B810(int param_1,int param_2,float fparam_0);
extern int func_0025B874(undefined4 *param_1);
extern int func_0034C57C(int param_1,int param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int DAT_0036ad60;
extern float DAT_0036ad64;
extern int DAT_0036ad68;
extern char s_SE_S_RUPEE_DOWN_FIN_0036ad80[];
extern char s_SE_S_RUPEE_UP_FIN_0036ad6c[];

// USA 0036AC08 <- EU 0036ABE4 (Ghidra, non-matching)
// GLOBAL DAT_0036ad60 int
// GLOBAL DAT_0036ad64 float
// GLOBAL DAT_0036ad68 int
// GLOBAL s_SE_S_RUPEE_DOWN_FIN_0036ad80 string
// GLOBAL s_SE_S_RUPEE_UP_FIN_0036ad6c string

void func_0036AC08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 uVar10;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define auStack_88 ((undefined4 *)(albw_frame + 0x8))
  #define local_28 (*(int *)(albw_frame + 0x68))
  #define local_24 (*(char * *)(albw_frame + 0x6c))
  *(undefined4 *)(param_1 + 0x70) = 5;
  fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x6c),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x74) = fVar9;
  func_0034C57C(*(int *)(param_1 + 0x60),(int)fVar9);
  *(undefined1 *)(param_1 + 0x78) = 0;
  iVar1 = DAT_0036ad60;
  uVar3 = 0;
  iVar6 = *(int *)(param_1 + 0x6c);
  iVar5 = *(int *)(param_1 + 0x68);
  do {
    iVar4 = (int)((ulonglong)((longlong)iVar1 * (longlong)iVar6) >> 0x20);
    iVar4 = (iVar4 >> 2) - (iVar4 >> 0x1f);
    iVar6 = iVar6 + iVar4 * -10;
    puVar7 = (undefined4 *)(param_1 + 0x80);
    if (uVar3 < 4) {
      puVar7 = puVar7 + uVar3;
    }
    uVar10 = ALBW_AS_U32(VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3));
    *puVar7 = uVar10;
    iVar8 = (int)((ulonglong)((longlong)iVar1 * (longlong)iVar5) >> 0x20);
    iVar8 = (iVar8 >> 2) - (iVar8 >> 0x1f);
    if (iVar5 + iVar8 * -10 != iVar6) {
      *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | (byte)(1 << (uVar3 & 0xff));
    }
    iVar2 = DAT_0036ad68;
    uVar3 = uVar3 + 1;
    iVar6 = iVar4;
    iVar5 = iVar8;
  } while ((int)uVar3 < 4);
  if (*(int *)(param_1 + 0x6c) < *(int *)(param_1 + 0x68)) {
    if (*(char *)(param_1 + 0x90) != '\0') {
      fVar9 = DAT_0036ad64;
      func_0010A464(auStack_88);
      local_24 = s_SE_S_RUPEE_UP_FIN_0036ad6c;
      local_28 = iVar2;
      func_00533078(param_1,&local_28,auStack_88);
      func_0025B810((int)auStack_88,0,fVar9);
      func_0025B874(auStack_88);
    }
  }
  else {
    fVar9 = DAT_0036ad64;
    func_0010A464(auStack_88);
    local_24 = s_SE_S_RUPEE_DOWN_FIN_0036ad80;
    local_28 = iVar2;
    func_00533078(param_1,&local_28,auStack_88);
    func_0025B810((int)auStack_88,0,fVar9);
    func_0025B874(auStack_88);
  }
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}

