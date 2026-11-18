#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ef054;
extern undefined4 *DAT_005ef058;
extern undefined4 *DAT_005ef05c;
extern undefined DAT_005ef060;
extern undefined4 DAT_005ef074;
extern uint *DAT_005ef08c;
extern undefined4 DAT_005ef090;
extern undefined4 *DAT_005ef094;
extern undefined4 DAT_005ef098;
extern undefined4 DAT_005ef09c;
extern char s_TagOverwriteRestart_005ef078[];

// USA 005EEFE8 <- EU 005EEFC0 (Ghidra, non-matching)
// GLOBAL DAT_005ef054 undefined4 *
// GLOBAL DAT_005ef058 undefined4 *
// GLOBAL DAT_005ef05c undefined4 *
// GLOBAL DAT_005ef060 undefined
// GLOBAL DAT_005ef074 undefined4
// GLOBAL DAT_005ef08c uint *
// GLOBAL DAT_005ef090 undefined4
// GLOBAL DAT_005ef094 undefined4 *
// GLOBAL DAT_005ef098 undefined4
// GLOBAL DAT_005ef09c undefined4
// GLOBAL s_TagOverwriteRestart_005ef078 string

undefined8 func_005EEFE8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ef054;
  *DAT_005ef054 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ef058;
  *DAT_005ef058 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ef05c;
  puVar3 = DAT_005ef05c + 3;
  *DAT_005ef05c = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ef074;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ef060;
  local_18 = local_10;
  local_14 = s_TagOverwriteRestart_005ef078;
  uVar2 = func_0019B51C(DAT_005ef094,DAT_005ef090,*DAT_005ef08c,(int)&local_18,DAT_005ef05c,
                        &local_10,0);
  return CONCAT44(DAT_005ef09c,uVar2);
}

