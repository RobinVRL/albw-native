#include "ghidra_types.h"

extern int func_00255B48(int param_1,int param_2,int param_3);
extern undefined8 func_00259354(int param_1,int *param_2,int param_3);
extern int func_00297298(int param_1,int param_2);
extern int func_0051B888(int param_1,int param_2);
extern int func_0051BE80(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int *DAT_00171fe0;
extern int DAT_00171ff0;
extern int *DAT_00171ff4;
extern int *DAT_0017200c;
extern char s_BGM_STUDIUM_RESULT_00171ff8[];
extern char s_SE_S_FINISH_00171fe4[];

// USA 00171F08 <- EU 00171F08 (Ghidra, non-matching)
// GLOBAL DAT_00171fe0 int *
// GLOBAL DAT_00171ff0 int
// GLOBAL DAT_00171ff4 int *
// GLOBAL DAT_0017200c int *
// GLOBAL s_BGM_STUDIUM_RESULT_00171ff8 string
// GLOBAL s_SE_S_FINISH_00171fe4 string

undefined4 func_00171F08(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint in_r2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar1 = DAT_00171fe0;
  if (param_2 == 0) {
    func_0051B888(*DAT_00171fe0,2);
    piVar3 = DAT_00171ff4;
    iVar2 = DAT_00171ff0;
    local_1c = s_SE_S_FINISH_00171fe4;
    local_20 = DAT_00171ff0;
    func_00587F74(*DAT_00171ff4,&local_20,0);
    func_00297298(*piVar3,0x1e);
    local_1c = s_BGM_STUDIUM_RESULT_00171ff8;
    local_20 = iVar2;
    in_r2 = 0x3c;
    func_00259354(*piVar3,&local_20,0x3c);
  }
  uVar4 = *(uint *)(param_1 + 0x2cc);
  if ((*(byte *)(param_1 + 0x34) & 8) == 0) {
    *(uint *)(param_1 + 0x1c) = uVar4;
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 8;
  }
  else {
    in_r2 = *(uint *)(param_1 + 0x1c);
    if (in_r2 < uVar4) {
      *(uint *)(param_1 + 0x1c) = uVar4;
      *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 8;
      *(undefined1 *)(param_1 + 0x2e0) = 1;
    }
  }
  func_0051BE80(*piVar1);
  return func_00255B48(*DAT_0017200c,*(int *)(param_1 + 0x2cc),in_r2);
}

