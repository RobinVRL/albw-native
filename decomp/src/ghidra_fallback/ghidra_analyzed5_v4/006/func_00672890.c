#include "ghidra_types.h"

extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int func_00150DEC(int *param_1,int *param_2,undefined4 *param_3);
extern int func_002F8DE4(int *param_1,int param_2,uint param_3,int param_4);
extern int DAT_00672928;
extern int DAT_0067293c;
extern char s_SE_Soldier_DASH_0067292c[];

// USA 00672890 <- EU 00672868 (Ghidra, non-matching)
// GLOBAL DAT_00672928 int
// GLOBAL DAT_0067293c int
// GLOBAL s_SE_Soldier_DASH_0067292c string

undefined4 func_00672890(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_00672928;
  param_1[0xf7] = DAT_00672928;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  iVar1 = DAT_0067293c;
  uVar2 = param_2 & 0xff;
  bVar4 = 0x1d < uVar2;
  bVar3 = uVar2 == 0x1e;
  if (!bVar3) {
    uVar2 = uVar2 - 0xe;
    bVar4 = 2 < uVar2;
  }
  if (!bVar4 || (bVar3 || uVar2 == 3)) {
    local_1c = s_SE_Soldier_DASH_0067292c;
    local_20 = DAT_0067293c;
    func_001509A4((int)param_1,&local_20,0);
    if ((char)param_1[0x242] == '\0') {
      local_14 = s_SE_Soldier_DASH_0067292c;
      local_18 = iVar1;
      func_00150DEC(param_1,&local_18,(undefined4 *)0x0);
    }
    func_002F8DE4(param_1,5,0xffffffff,0);
  }
  else if ((param_2 & 0xff) - 0x15 < 8) {
    return func_002F8DE4(param_1,10,0xffffffff,0);
  }
  return 0;
}

