#include "ghidra_types.h"

extern int func_002B9EA4(int param_1,int param_2);
extern int func_003A2F68(int param_1,uint param_2);
extern int func_004C6C50(int param_1,uint param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int *DAT_00397810;
extern int DAT_00397820;
extern int *DAT_00397824;
extern char s_SE_PL_EAT_APPLE_00397ab8[];

// GLOBAL DAT_00397810 int *
// GLOBAL DAT_00397820 int
// GLOBAL DAT_00397824 int *
// GLOBAL s_SE_PL_EAT_APPLE_00397ab8 string
// USA 0039795C <- EU 00397938 (Ghidra, function missing from the decomp table)

undefined4 func_0039795C(void)

{
  _Alignas(8) unsigned char albw_frame[0xa0]; /* entry_sp - 0x0 .. entry_sp + 0xa0 */
#define stack0x00000060 (*(undefined4 *)(albw_frame + 0x60))
  int unaff_r4;
  #define in_stack_00000060 (*(int *)(albw_frame + 0x60)) /* V4: frame slot (callee-filled) */
  char *in_stack_00000064;
  
  func_002B9EA4(*(int *)(unaff_r4 + 4),0xc);
  func_003A2F68(*(int *)(unaff_r4 + 4) + 0xbc8,0x19);
  func_004C6C50(*DAT_00397810,0x19);
  func_004CF478(*(int *)(unaff_r4 + 0x34),0);
  func_004CF478(*(int *)(unaff_r4 + 0x3c),1);
  in_stack_00000064 = s_SE_PL_EAT_APPLE_00397ab8;
  in_stack_00000060 = DAT_00397820;
  return func_004EABB8(*DAT_00397824,&stack0x00000060,(undefined4 *)0x0);
}

