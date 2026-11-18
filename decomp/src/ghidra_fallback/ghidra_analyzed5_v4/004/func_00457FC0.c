// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00166C00(int param_1,int param_2);
extern int func_00457510(int param_1);
extern int func_0045918C(int param_1);
extern int func_00459388(int param_1);
extern int func_00532C78(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int *DAT_004580b8;
extern int *DAT_004580bc;
extern int DAT_004580cc;
extern int *DAT_004580d0;
extern char s_SE_S_DECIDE_004580c0[];

// USA 00457FC0 <- EU 00457F98 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_004580b8 int *
// GLOBAL DAT_004580bc int *
// GLOBAL DAT_004580cc int
// GLOBAL DAT_004580d0 int *
// GLOBAL s_SE_S_DECIDE_004580c0 string

undefined4 func_00457FC0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_004580b8;
  if (*(char *)(*DAT_004580b8 + 0xa4) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x1c4);
    bVar4 = *(char *)(uVar2 + 0x8c) == '\0';
    if (bVar4) {
      uVar2 = (uint)*(byte *)(uVar2 + 0xa8);
    }
    if ((bVar4 && uVar2 == 0) && (bVar4 = func_00532C78(param_1 + 0x134), !bVar4)) {
      piVar3 = (int *)(param_1 + 0x1e4);
      if (*(uint *)(param_1 + 0x230) < 3) {
        piVar3 = piVar3 + *(uint *)(param_1 + 0x230);
      }
      bVar4 = func_00532C78(*piVar3 + 0xec);
      if (!bVar4) {
        *(undefined1 *)(param_1 + 0x224) = 1;
        func_00166C00(*piVar1,1);
      }
    }
  }
  func_0045918C(param_1);
  if ((*(char *)(param_1 + 0x224) != '\0') &&
     ((*(uint *)(*DAT_004580bc + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 1) != 0)) {
    return func_00459388(param_1);
  }
  if (*(char *)(*(int *)(param_1 + 0x1c4) + 0x8c) != '\0') {
    func_00457510(param_1);
    func_0066D544((undefined4 *)(param_1 + 0x17c),'\x1c');
    pcStack_14 = s_SE_S_DECIDE_004580c0;
    iStack_18 = DAT_004580cc;
    func_00587F74(*DAT_004580d0,&iStack_18,0);
  }
  return 0;
}

