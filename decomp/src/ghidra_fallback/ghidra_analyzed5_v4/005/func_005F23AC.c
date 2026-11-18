#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005f2418;
extern undefined4 *DAT_005f241c;
extern undefined4 *DAT_005f2420;
extern undefined DAT_005f2424;
extern undefined4 DAT_005f2440;
extern uint *DAT_005f245c;
extern undefined4 DAT_005f2460;
extern undefined4 *DAT_005f2464;
extern undefined4 DAT_005f2468;
extern undefined4 DAT_005f246c;
extern char s_TagSwitchSoundPlayer_005f2444[];

// USA 005F23AC <- EU 005F2384 (Ghidra, non-matching)
// GLOBAL DAT_005f2418 int
// GLOBAL DAT_005f241c undefined4 *
// GLOBAL DAT_005f2420 undefined4 *
// GLOBAL DAT_005f2424 undefined
// GLOBAL DAT_005f2440 undefined4
// GLOBAL DAT_005f245c uint *
// GLOBAL DAT_005f2460 undefined4
// GLOBAL DAT_005f2464 undefined4 *
// GLOBAL DAT_005f2468 undefined4
// GLOBAL DAT_005f246c undefined4
// GLOBAL s_TagSwitchSoundPlayer_005f2444 string

undefined8 func_005F23AC(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  iVar1 = DAT_005f2418;
  *(undefined4 *)(DAT_005f2418 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005f241c;
  *DAT_005f241c = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005f2420;
  puVar4 = DAT_005f2420 + 3;
  *DAT_005f2420 = 0;
  puVar2[1] = 5;
  local_10 = DAT_005f2440;
  puVar2[2] = puVar4;
  puStack_c = &DAT_005f2424;
  local_18 = local_10;
  local_14 = s_TagSwitchSoundPlayer_005f2444;
  uVar3 = func_0019B51C(DAT_005f2464,DAT_005f2460,*DAT_005f245c,(int)&local_18,DAT_005f2420,
                        &local_10,0);
  return CONCAT44(DAT_005f246c,uVar3);
}

