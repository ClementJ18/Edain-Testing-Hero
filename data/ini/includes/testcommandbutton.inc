CommandButton Command_SpecialAbilityGrantExp
  Command            = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityKingsFavor_NoCooldown
  Options            = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel            = CONTROLBAR:KingsFavor
  ButtonImage            = HPTheodenKing'sFavor
  CursorName            = Bombard
  RadiusCursorType        = KingsFavorRadiusCursor
  ButtonBorderType        = ACTION 
  DescriptLabel            = CONTROLBAR:ToolTipKingsFavor
  AutoAbility            = No
  Radial            = Yes
End

CommandButton Command_SpecialAbilityRestoration
    Command            = SPECIAL_POWER
    SpecialPower        = SpecialAbilityElrondRestoration_NoCooldown
    TextLabel        = CONTROLBAR:ElrondRestoration
    DescriptLabel        = CONTROLBAR:ToolTipElrondRestoration
    ButtonImage        = HSElrondWiederherstellung ;;;HSElrondRestoration
    Options            = NEED_TARGET_POS
    ButtonBorderType    = ACTION
    RadiusCursorType    = HealRadiusCursor
    Radial        = Yes
    UnitSpecificSound     = ElrondsWiderherstellungSound
    CommandTrigger        = Command_SpecialAbilityElrondRestorationHeal
End

CommandButton Command_KarshBlinkMapwide
    Command            = SPECIAL_POWER 
    SpecialPower           = SpecialAbilityHeroBlink_NoCooldown
    Options            = NEED_TARGET_POS
    TextLabel        = CONTROLBAR:SpecialAbilityHeroBlink
    ButtonImage        = KUBlinkIcon
    ButtonBorderType       = ACTION    
    CursorName        = EvilAbilityObj     
    InvalidCursorName      = GenericInvalid
    DescriptLabel           = Controlbar:TooltipSpecialAbilityKarshBlink
    Radial        = Yes   //     To    be hidden by default
End

CommandButton Command_SpecialAbilityRestorationMap
    Command            = SPECIAL_POWER
    SpecialPower       = SpecialAbilityElrondRestorationMap_NoCooldown
    ButtonImage        = HSElrondWiederherstellung
    TextLabel          = CONTROLBAR:SpecialAbilityWortderStilleNew
    ButtonBorderType   = ACTION
    DescriptLabel      = CONTROLBAR:ToolTipSpecialAbilityWortderStilleNew
    RadiusCursorType   = TrainingRadiusCursor
    Radial             = Yes
End

CommandButton Command_SpecialAbilitySpellbookRestoration
    Command            = SPECIAL_POWER
    SpecialPower       = SpecialAbilityQuickReload_NoCooldown
    ButtonImage        = HPDurin
    TextLabel          = CONTROLBAR:SpecialAbilityWortderStilleNew
    ButtonBorderType   = ACTION
    DescriptLabel      = CONTROLBAR:ToolTipSpecialAbilityWortderStilleNew
    RadiusCursorType   = TrainingRadiusCursor
    Radial             = Yes
End

CommandButton Command_BigIndustry
    Command   = SPECIAL_POWER
    SpecialPower  = SpecialAbilityAusbeutesteuer_NoCooldown
    ButtonImage   = HSSarumanCuromo
    Options   = NEED_TARGET_POS
    TextLabel   = CONTROLBAR:SarumanCuromo
    ButtonBorderType  = ACTION 
    DescriptLabel = CONTROLBAR:ToolTipSarumanCuromo
    RadiusCursorType    = IndustryRadiusCursor
    InvalidCursorName = GenericInvalid
    Radial          = Yes
End

CommandButton Command_SpecialAbilitySpawnRing
      Command                 = SPECIAL_POWER
      SpecialPower            = SpecialAbilityBeregondKompanie_NoCooldown
      Options                 = NEED_TARGET_POS
      TextLabel               = CONTROLBAR:SpecialAbilityDurinsErbe
      ButtonImage             = HSFrodoOneRing
      RadiusCursorType  = scFaramirRanger
      CursorName        = Defector
      InvalidCursorName = GenericInvalid     
      ButtonBorderType        = ACTION
      DescriptLabel           = CONTROLBAR:TooltipSpecialAbilityDurinsErbe
      Radial              = Yes
End

CommandButton Command_SpecialAbilitySpawnBadGuys
  Command                       = SPECIAL_POWER
  SpecialPower                  = SpecialAbilityUnbezähmbareSummon_NoCooldown
  TextLabel                     = CONTROLBAR:UnbezähmbareSummon
  DescriptLabel                 = CONTROLBAR:ToolTipUnbezähmbareSummon_Neu
  Options               = NEED_TARGET_POS  
  ButtonBorderType              = ACTION
  ButtonImage                   = HSSharkuUnbezähmbare
  RadiusCursorType              = SharkuWargRadiusCursor
  InvalidCursorName             = GenericInvalid
  AutoAbility                   = Yes
  Radial                    = Yes
End

CommandButton Command_SpecialAbilityGibPP
  Command                     = SPECIAL_POWER
  SpecialPower                = SpecialAbilityHeulenRudelführer_NoCooldown
  TextLabel                   = CONTROLBAR:SpecialAbilityPelzwechsler
  ButtonImage                 = HSBestienmeisterSeelenband
  RadiusCursorType            = TrainingRadiusCursor
  ButtonBorderType            = ACTION
  DescriptLabel               = CONTROLBAR:ToolTipSpecialAbilityPelzwechsler_Neu
  Radial                  = Yes
  AutoAbility                 = Yes
  PresetRange                 = 160.0
End

CommandButton Command_FireWeaponMordorFortressSpireFireball_Boom
    Command                = SPECIAL_POWER 
    SpecialPower        = SpecialAbilityGorgorothSpireFireball_NoCooldown
    TextLabel            = CONTROLBAR:FireWeaponMordorFortressSpireFireball
    ButtonImage            = HSSarumanFireballAttack
    Options                = NEED_TARGET_POS
    ButtonBorderType    = ACTION 
    DescriptLabel        = CONTROLBAR:ToolTipFireWeaponMordorFortressSpireFireball
    RadiusCursorType    = RainOfFireRadiusCursor
    Radial            = Yes
    AutoAbility            = Yes
End

CommandButton Command_SpecialAbilityISeeYou
  Command     = SPECIAL_POWER
  SpecialPower    = SpecialAbilityDunklerWille_NoCooldown
  TextLabel   = CONTROLBAR:DenethorSehenderStein1
  DescriptLabel   = CONTROLBAR:TooltipDenethorSehenderStein1_Neu2
  ButtonImage   = HSSehenderStein
  ButtonBorderType  = ACTION
  Radial    = Yes
  AutoAbility   = Yes
        UnitSpecificSound       = SpellPalantirVision
End

CommandButton Command_SpecialAbilitySettlement
  Command                       = SPECIAL_POWER
  SpecialPower                  = SpecialAbilitySpawnSettlement_NoCooldown
  TextLabel        = CONTROLBAR:UnpackGondorFarm
  DescriptLabel    = CONTROLBAR:ToolTipGondorFarmUnpack
  Options               = NEED_TARGET_POS  
  ButtonBorderType              = ACTION
  ButtonImage                   = BCFarm
  RadiusCursorType              = KingsFavorRadiusCursor
  InvalidCursorName             = GenericInvalid
  AutoAbility                   = Yes
  InPalantir                    = Yes
End

CommandButton Command_SpecialAbilityOutpost
  Command                       = SPECIAL_POWER
  SpecialPower                  = SpecialAbilitySpawnOutpost_NoCooldown
  TextLabel           = CONTROLBAR:ConstructOutpost
  DescriptLabel    = CONTROLBAR:ToolTipOutpostUnpack
  Options               = NEED_TARGET_POS  
  ButtonBorderType              = ACTION
  ButtonImage                   = HSMordorCitadel
  RadiusCursorType              = KingsFavorRadiusCursor
  InvalidCursorName             = GenericInvalid
  AutoAbility                   = Yes
  InPalantir                    = Yes
End

CommandButton Command_SpecialAbilityCamp
  Command                       = SPECIAL_POWER
  SpecialPower                  = SpecialAbilitySpawnCamp_NoCooldown
  TextLabel        = CONTROLBAR:ConstructCamp
  DescriptLabel    = CONTROLBAR:ToolTipCampUnpack
  Options               = NEED_TARGET_POS  
  ButtonBorderType              = ACTION
  ButtonImage                   = BRCamp_Build
  RadiusCursorType              = KingsFavorRadiusCursor
  InvalidCursorName             = GenericInvalid
  AutoAbility                   = Yes
  InPalantir                    = Yes
End

CommandButton Command_SpecialAbilityCastle
  Command                       = SPECIAL_POWER
  SpecialPower                  = SpecialAbilitySpawnCastle_NoCooldown
  TextLabel        = CONTROLBAR:ConstructCastle
  DescriptLabel    = CONTROLBAR:ToolTipCastleUnpack
  Options               = NEED_TARGET_POS  
  ButtonBorderType              = ACTION
  ButtonImage                   = UCCommon_UpgradeStructureNew
  RadiusCursorType              = KingsFavorRadiusCursor
  InvalidCursorName             = GenericInvalid
  AutoAbility                   = Yes
  InPalantir                    = Yes
End

CommandButton Command_SpecialAbilitySpawnTrees
  Command                       = SPECIAL_POWER
  SpecialPower                  = SpecialAbilitySpawnTrees_NoCooldown
  TextLabel            = CONTROLBAR:ElvenWood
    ButtonImage            = SBGood_ElvenWood
    ButtonBorderType    = ACTION 
    DescriptLabel        = CONTROLBAR:TooltipElvenWood
    RadiusCursorType    = ElvenWoodRadiusCursor
  Options               = NEED_TARGET_POS  
  InvalidCursorName             = GenericInvalid
  AutoAbility                   = Yes
  Radial                    = Yes
End

CommandButton Command_SpecialAbilityDominateEnemySarumanForever
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityDominateEnemySaruman_NoCooldown
  Options                 = NEED_TARGET_POS
  TextLabel               = CONTROLBAR:Dominate
  ButtonImage             = HSSarumanDominate
  RadiusCursorType        = DominateRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipDominateSaruman
  Radial              = Yes
  ;UnitSpecificSound       = SarumanVoiceDominate
End

CommandButton Command_SauronModFiresOfDoom_Hack
    Command            = SPECIAL_POWER 
    SpecialPower       = FiresOfDoomSpecialPower_NoCooldown
    Options            = NEED_TARGET_POS
    TextLabel          = CONTROLBAR:SpecialAbilityFiresOfDoomSauronMod
    RadiusCursorType   = RainOfFireRadiusCursor
    ButtonImage        = HSSauronModFiresOfDoom
    ButtonBorderType   = SYSTEM
    DescriptLabel      = CONTROLBAR:ToolTipSpecialAbilityFiresOfDoomSauronMod
    InPalantir         = No
    AutoAbility        = Yes
    Radial             = Yes
End

CommandButton Command_BilboMeisterdieb_Hack
  Command     = SPECIAL_POWER
  SpecialPower    = SpecialAbilityBilboMeisterdieb_NoCooldown
  TextLabel   = CONTROLBAR:BilboTreasure
  DescriptLabel   = CONTROLBAR:TooltipBilboTreasure
  ButtonImage   = HSBilboMeisterdieb
  ButtonBorderType  = ACTION
  InPalantir    = No
  Radial        = Yes
  AutoAbility   = Yes
  UnitSpecificSound = TreasurePickup
End

CommandButton Command_SpecialAbilityDrauglinMondsicheln_Hack
    Command            = SPECIAL_POWER
    SpecialPower       = SpecialAbilityDrauglinMondsicheln_NoCooldown
    TextLabel          = CONTROLBAR:SpecialAbilityDrauglinMondsicheln
    DescriptLabel      = CONTROLBAR:ToolTipSpecialAbilityDrauglinMondsicheln
    ButtonImage        = HSDrauglinMondsicheln
    ButtonBorderType   = ACTION
    Radial             = Yes
    AutoAbility        = Yes
    UnitSpecificSound  = MondsichelnSoundEffectMS
End
