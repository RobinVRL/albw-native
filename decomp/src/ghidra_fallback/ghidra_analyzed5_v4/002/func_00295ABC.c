#include "ghidra_types.h"

extern int func_0010BC94(undefined4 *param_1,undefined1 param_2);
extern int func_00294404(int param_1,int *param_2,int param_3,int *param_4,int param_5);
extern int func_0058791C(int param_1,int *param_2);
extern int DAT_00295b78;
extern int *DAT_00295b8c;
extern int DAT_00295b90;
extern char s_SE_PL_DOWN_END_00295b7c[];

// USA 00295ABC <- EU 00295AE4 (Ghidra, non-matching)
// GLOBAL DAT_00295b78 int
// GLOBAL DAT_00295b8c int *
// GLOBAL DAT_00295b90 int
// GLOBAL s_SE_PL_DOWN_END_00295b7c string

void func_00295ABC(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar2 = DAT_00295b78;
  if (*(char *)(param_1 + 0x1a5) != '\0') {
    local_1c = s_SE_PL_DOWN_END_00295b7c;
    local_20 = DAT_00295b78;
    iVar3 = func_0058791C(*DAT_00295b8c,&local_20);
    if (iVar3 == 0) {
      bVar1 = true;
      goto LAB_00295b2c;
    }
  }
  bVar1 = false;
LAB_00295b2c:
  if (bVar1) {
    local_14 = *(undefined4 *)(DAT_00295b90 + 0x20);
    local_18 = iVar2;
    func_00294404(param_1,&local_18,0x1e,(int *)0x0,0);
    func_0010BC94((undefined4 *)(param_1 + 0xc4),0);
    *(undefined1 *)(param_1 + 0x1a5) = 0;
  }
  return;
}

