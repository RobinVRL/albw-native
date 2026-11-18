#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ed020;
extern undefined4 *DAT_005ed024;
extern undefined4 DAT_005ed034;
extern undefined4 DAT_005ed038;
extern undefined4 DAT_005ed03c;
extern undefined4 *DAT_005ed040;
extern undefined4 DAT_005ed05c;
extern undefined4 *DAT_005ed060;
extern undefined4 DAT_005ed0ac;
extern undefined4 *DAT_005ed0b0;
extern undefined4 DAT_005ed0fc;
extern char s_G_Num1_00_005ed094[];
extern char s_G_Num2_00_005ed088[];
extern char s_G_Num3_00_005ed07c[];
extern char s_G_Num4_00_005ed070[];
extern char s_G_Num5_00_005ed064[];
extern char s_G_Text_00_005ed0a0[];
extern char s_Gm_TimeUpT_005ed028[];
extern char s_InOutNum_005ed044[];
extern char s_InOutText_005ed050[];
extern char s_P_Num1_00_005ed0e4[];
extern char s_P_Num2_00_005ed0d8[];
extern char s_P_Num3_00_005ed0cc[];
extern char s_P_Num4_00_005ed0c0[];
extern char s_P_Num5_00_005ed0b4[];
extern char s_T_Text_00_005ed0f0[];

// USA 005ECEEC <- EU 005ECEC4 (Ghidra, non-matching)
// GLOBAL DAT_005ed020 undefined4 *
// GLOBAL DAT_005ed024 undefined4 *
// GLOBAL DAT_005ed034 undefined4
// GLOBAL DAT_005ed038 undefined4
// GLOBAL DAT_005ed03c undefined4
// GLOBAL DAT_005ed040 undefined4 *
// GLOBAL DAT_005ed05c undefined4
// GLOBAL DAT_005ed060 undefined4 *
// GLOBAL DAT_005ed0ac undefined4
// GLOBAL DAT_005ed0b0 undefined4 *
// GLOBAL DAT_005ed0fc undefined4
// GLOBAL s_G_Num1_00_005ed094 string
// GLOBAL s_G_Num2_00_005ed088 string
// GLOBAL s_G_Num3_00_005ed07c string
// GLOBAL s_G_Num4_00_005ed070 string
// GLOBAL s_G_Num5_00_005ed064 string
// GLOBAL s_G_Text_00_005ed0a0 string
// GLOBAL s_Gm_TimeUpT_005ed028 string
// GLOBAL s_InOutNum_005ed044 string
// GLOBAL s_InOutText_005ed050 string
// GLOBAL s_P_Num1_00_005ed0e4 string
// GLOBAL s_P_Num2_00_005ed0d8 string
// GLOBAL s_P_Num3_00_005ed0cc string
// GLOBAL s_P_Num4_00_005ed0c0 string
// GLOBAL s_P_Num5_00_005ed0b4 string
// GLOBAL s_T_Text_00_005ed0f0 string

undefined4 func_005ECEEC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ed020;
  *DAT_005ed020 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005ed034;
  puVar1 = DAT_005ed024;
  *DAT_005ed024 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Gm_TimeUpT_005ed028;
  puVar1[2] = uVar2;
  puVar1 = DAT_005ed040;
  DAT_005ed040[1] = s_InOutNum_005ed044;
  *puVar1 = uVar2;
  puVar1[3] = s_InOutNum_005ed044;
  puVar1[2] = uVar2;
  puVar1[5] = s_InOutNum_005ed044;
  puVar1[4] = uVar2;
  puVar1[7] = s_InOutNum_005ed044;
  puVar1[6] = uVar2;
  puVar1[9] = s_InOutNum_005ed044;
  puVar1[8] = uVar2;
  puVar1[10] = uVar2;
  puVar1[0xb] = s_InOutText_005ed050;
  puVar1 = DAT_005ed060;
  DAT_005ed060[1] = s_G_Num5_00_005ed064;
  *puVar1 = uVar2;
  puVar1[3] = s_G_Num4_00_005ed070;
  puVar1[2] = uVar2;
  puVar1[5] = s_G_Num3_00_005ed07c;
  puVar1[4] = uVar2;
  puVar1[7] = s_G_Num2_00_005ed088;
  puVar1[6] = uVar2;
  puVar1[9] = s_G_Num1_00_005ed094;
  puVar1[8] = uVar2;
  puVar1[10] = uVar2;
  puVar1[0xb] = s_G_Text_00_005ed0a0;
  puVar1 = DAT_005ed0b0;
  DAT_005ed0b0[1] = s_P_Num5_00_005ed0b4;
  *puVar1 = uVar2;
  puVar1[3] = s_P_Num4_00_005ed0c0;
  puVar1[2] = uVar2;
  puVar1[5] = s_P_Num3_00_005ed0cc;
  puVar1[4] = uVar2;
  puVar1[7] = s_P_Num2_00_005ed0d8;
  puVar1[6] = uVar2;
  puVar1[9] = s_P_Num1_00_005ed0e4;
  puVar1[8] = uVar2;
  puVar1[10] = uVar2;
  puVar1[0xb] = s_T_Text_00_005ed0f0;
  return func_005902C0(0);
}

