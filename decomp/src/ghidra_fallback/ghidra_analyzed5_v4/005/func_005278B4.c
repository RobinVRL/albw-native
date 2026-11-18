#include "ghidra_types.h"

extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int *DAT_005278fc;
extern int DAT_00527900;
extern int DAT_00527904;
extern int DAT_00527908;

// USA 005278B4 <- EU 0052788C (Ghidra, non-matching)
// GLOBAL DAT_005278fc int *
// GLOBAL DAT_00527900 int
// GLOBAL DAT_00527904 int
// GLOBAL DAT_00527908 int

int func_005278B4(void)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define iStack_2c (*(int *)(albw_frame + 0x4))
  #define local_20 ((int *)(albw_frame + 0x10))
  #define iStack_c (*(int *)(albw_frame + 0x24))
  iVar2 = *(int *)(DAT_00527900 + 8);
  if (*DAT_005278fc != 0) {
    local_20[2] = 0;
    local_20[3] = 0xffffffff;
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[4] = DAT_00527908;
    iStack_c = DAT_00527904;
    iStack_2c = DAT_00527904 + -8;
    local_30 = DAT_00527908;
    iVar1 = func_005826A4(*DAT_005278fc,local_20,&local_30,local_20 + 4);
    if (iVar1 != 0) {
      iVar2 = local_20[0];
    }
  }
  return iVar2;
}

