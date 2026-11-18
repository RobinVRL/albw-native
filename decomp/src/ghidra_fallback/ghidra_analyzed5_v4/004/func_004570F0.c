#include "ghidra_types.h"

extern int func_00457510(int param_1);
extern int func_0045918C(int param_1);
extern int func_00459388(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int *DAT_00457170;
extern int DAT_00457180;
extern int *DAT_00457184;
extern char s_SE_S_DECIDE_00457174[];

// USA 004570F0 <- EU 004570C8 (Ghidra, non-matching)
// GLOBAL DAT_00457170 int *
// GLOBAL DAT_00457180 int
// GLOBAL DAT_00457184 int *
// GLOBAL s_SE_S_DECIDE_00457174 string

undefined4 func_004570F0(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_0045918C(param_1);
  if ((*(char *)(param_1 + 0x224) != '\0') &&
     ((*(uint *)(*DAT_00457170 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 1) != 0)) {
    return func_00459388(param_1);
  }
  if (*(char *)(*(int *)(param_1 + 0x1c4) + 0x8c) != '\0') {
    func_00457510(param_1);
    func_0066D544((undefined4 *)(param_1 + 0x17c),'\x13');
    local_c = s_SE_S_DECIDE_00457174;
    local_10 = DAT_00457180;
    func_00587F74(*DAT_00457184,&local_10,0);
  }
  return 0;
}

