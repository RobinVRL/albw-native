#include "ghidra_types.h"

extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066C19C(undefined4 *param_1,undefined1 param_2);
extern int DAT_00487e48;
extern char s_SE_S_TALK_SELECT_00487e34[];

// USA 00487DD4 <- EU 00487DAC (Ghidra, non-matching)
// GLOBAL DAT_00487e48 int
// GLOBAL s_SE_S_TALK_SELECT_00487e34 string

undefined4 func_00487DD4(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (-1 < (int)param_2) {
    piVar1 = (int *)(param_1 + 0x13c);
    if (param_2 < 4) {
      piVar1 = piVar1 + param_2;
    }
    func_0066C19C((undefined4 *)(*piVar1 + 0x38),0);
  }
  piVar1 = (int *)(param_1 + 0x13c);
  if ((uint)(int)*(char *)(param_1 + 0x8a) < 4) {
    piVar1 = piVar1 + *(char *)(param_1 + 0x8a);
  }
  func_0066C19C((undefined4 *)(*piVar1 + 0x38),2);
  local_c = s_SE_S_TALK_SELECT_00487e34;
  local_10 = DAT_00487e48;
  puVar2 = (undefined4 *)(param_1 + 0x13c);
  if ((uint)(int)*(char *)(param_1 + 0x8a) < 4) {
    puVar2 = puVar2 + *(char *)(param_1 + 0x8a);
  }
  return func_00533078(*puVar2,&local_10,0);
}

