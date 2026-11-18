#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_00231448(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_005438EC(uint *param_1);
extern int DAT_00254eb4;
extern char s_SE_S_TALK_NEXT_00254ea4[];

// USA 00254E18 <- EU 00254E40 (Ghidra, non-matching)
// GLOBAL DAT_00254eb4 int
// GLOBAL s_SE_S_TALK_NEXT_00254ea4 string

void func_00254E18(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = func_005438EC(*(uint **)(param_1 + 0x14));
  if ((iVar1 != 0) && ((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 4) != 0)) {
    func_00231448(param_1 + 0x38);
    func_0012C718(param_1);
    local_c = s_SE_S_TALK_NEXT_00254ea4;
    local_10 = DAT_00254eb4;
    func_00533078(param_1,&local_10,0);
  }
  return;
}

