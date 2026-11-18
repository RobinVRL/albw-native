#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ca700;
extern undefined4 *DAT_005ca704;
extern undefined4 *DAT_005ca708;
extern undefined DAT_005ca70c;
extern undefined4 DAT_005ca720;
extern uint *DAT_005ca734;
extern undefined4 DAT_005ca738;
extern undefined4 *DAT_005ca73c;
extern undefined4 DAT_005ca740;
extern undefined4 DAT_005ca744;
extern char s_TagSoundPlayer_005ca724[];

// USA 005CA694 <- EU 005CA66C (Ghidra, non-matching)
// GLOBAL DAT_005ca700 undefined4 *
// GLOBAL DAT_005ca704 undefined4 *
// GLOBAL DAT_005ca708 undefined4 *
// GLOBAL DAT_005ca70c undefined
// GLOBAL DAT_005ca720 undefined4
// GLOBAL DAT_005ca734 uint *
// GLOBAL DAT_005ca738 undefined4
// GLOBAL DAT_005ca73c undefined4 *
// GLOBAL DAT_005ca740 undefined4
// GLOBAL DAT_005ca744 undefined4
// GLOBAL s_TagSoundPlayer_005ca724 string

undefined8 func_005CA694(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ca700;
  *DAT_005ca700 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca704;
  *DAT_005ca704 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ca708;
  puVar3 = DAT_005ca708 + 3;
  *DAT_005ca708 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ca720;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ca70c;
  local_18 = local_10;
  local_14 = s_TagSoundPlayer_005ca724;
  uVar2 = func_0019B51C(DAT_005ca73c,DAT_005ca738,*DAT_005ca734,(int)&local_18,DAT_005ca708,
                        &local_10,0);
  return CONCAT44(DAT_005ca744,uVar2);
}

