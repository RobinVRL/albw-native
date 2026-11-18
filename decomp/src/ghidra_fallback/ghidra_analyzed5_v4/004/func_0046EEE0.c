#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_00521608(int param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int *DAT_0046f080;
extern int DAT_0046f084;
extern int *DAT_0046f0a0;
extern int *DAT_0046f0a4;
extern char s_N_Info_00_0046f088[];
extern char s_N_NoInfo_00_0046f094[];

// USA 0046EEE0 <- EU 0046EEB8 (Ghidra, non-matching)
// GLOBAL DAT_0046f080 int *
// GLOBAL DAT_0046f084 int
// GLOBAL DAT_0046f0a0 int *
// GLOBAL DAT_0046f0a4 int *
// GLOBAL s_N_Info_00_0046f088 string
// GLOBAL s_N_NoInfo_00_0046f094 string

undefined4 func_0046EEE0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 ((int *)(albw_frame + 0x18))
  piVar3 = *(int **)(param_1 + 0x1c);
  iVar1 = func_00521608(*DAT_0046f080);
  iVar2 = DAT_0046f084;
  if (iVar1 == 0) {
    local_2c = s_N_Info_00_0046f088;
    local_30 = DAT_0046f084;
    iVar1 = func_005229AC(piVar3,&local_30);
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x44) & 1) != 0)) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    local_2c = s_N_NoInfo_00_0046f094;
    local_30 = iVar2;
    iVar1 = func_005229AC(piVar3,&local_30);
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x44) & 1) == 0)) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
      *(byte *)(piVar3 + 0x1c) = *(byte *)(piVar3 + 0x1c) | 2;
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      local_28[0] = 0;
      local_28[1] = 0;
      local_28[3] = 0xffffffff;
      local_28[2] = 0;
      local_34 = *(char **)(*(int *)(param_1 + 0xac) + 0xa8);
      local_38 = iVar2;
      func_005826A4(*DAT_0046f0a4,local_28,DAT_0046f0a0,&local_38);
      if (local_28[0] != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0xa4) + 0x28);
        func_001788DC(iVar2,local_28);
        piVar3 = *(int **)(param_1 + 0xac);
        *(undefined2 *)(iVar2 + 0x32) = 0;
        *(undefined1 *)(iVar2 + 0x3d) = 0;
        return (**(code **)(*piVar3 + 0x60))
                  (piVar3,*(undefined4 *)(iVar2 + 8),0,*(ushort *)(iVar2 + 0x20) >> 1);
      }
    }
  }
  else {
    local_34 = s_N_Info_00_0046f088;
    local_38 = DAT_0046f084;
    iVar1 = func_005229AC(piVar3,&local_38);
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x44) & 1) == 0)) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
      *(byte *)(piVar3 + 0x1c) = *(byte *)(piVar3 + 0x1c) | 2;
    }
    local_34 = s_N_NoInfo_00_0046f094;
    local_38 = iVar2;
    iVar2 = func_005229AC(piVar3,&local_38);
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x44) & 1) != 0)) {
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    }
  }
  return 0;
}

