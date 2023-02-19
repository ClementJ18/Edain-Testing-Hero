ObjectCreationList OCL_TheBadGuys
    CreateObject
        Count                   = 1
        ObjectNames             = GondorArvedui ;;;DerUnbezähmbare
        DestinationPlayer       = PlyrCreeps
        IgnoreCommandPointLimit = Yes
        Disposition     = ABSOLUTE_ANGLE
        DispositionAngle    = 0
        UseJustBuiltFlag    = Yes
        StartingBusyTime    = 5000
        Offset          = X:50 Y:0 Z:0
    End

    CreateObject
        Count                   = 1
        ObjectNames             = ArnorHueterHorde ;;;DerUnbezähmbare
        DestinationPlayer       = PlyrCreeps
        IgnoreCommandPointLimit = Yes
        Disposition     = ABSOLUTE_ANGLE
        DispositionAngle    = 0
        UseJustBuiltFlag    = Yes
        StartingBusyTime    = 5000
        Offset          = X:0 Y:-25 Z:0
    End

    CreateObject
        Count                   = 1
        ObjectNames             = ArnorHueterHorde ;;;DerUnbezähmbare
        DestinationPlayer       = PlyrCreeps
        IgnoreCommandPointLimit = Yes
        Disposition     = ABSOLUTE_ANGLE
        DispositionAngle    = 0
        UseJustBuiltFlag    = Yes
        StartingBusyTime    = 5000
        Offset          = X:0 Y:25 Z:0
    End

    CreateObject
        Count                   = 1
        ObjectNames             = ArnorRangerHorde ;;;DerUnbezähmbare
        DestinationPlayer       = PlyrCreeps
        IgnoreCommandPointLimit = Yes
        Disposition     = ABSOLUTE_ANGLE
        DispositionAngle    = 0
        UseJustBuiltFlag    = Yes
        StartingBusyTime    = 5000
        Offset          = X:-50 Y:-25 Z:0
    End

    CreateObject
        Count                   = 1
        ObjectNames             = ArnorRangerHorde ;;;DerUnbezähmbare
        DestinationPlayer       = PlyrCreeps
        IgnoreCommandPointLimit = Yes
        Disposition     = ABSOLUTE_ANGLE
        DispositionAngle    = 0
        UseJustBuiltFlag    = Yes
        StartingBusyTime    = 5000
        Offset          = X:-50 Y:25 Z:0
    End
End

ObjectCreationList Boom_OCL
    CreateObject
        ObjectNames             = HacksBombard
        Disposition             = RELATIVE_ANGLE USE_WATER_SURFACE    ; same angle as parent.
        DispositionAngle        = 0
        IssueMoveAfterCreation  = No
        IgnoreAllObjects        = Yes
    End
End

ObjectCreationList NukeBombard_OCL
    CreateObject
        ObjectNames             = NukeBombard
        Disposition             = RELATIVE_ANGLE USE_WATER_SURFACE    ; same angle as parent.
        DispositionAngle        = 0
        IssueMoveAfterCreation  = No
        IgnoreAllObjects        = Yes
    End
End

ObjectCreationList OCL_Settlement
    CreateObject
        ObjectNames             = WirtschaftPlotFlag
        Disposition             = RELATIVE_ANGLE USE_WATER_SURFACE    ; same angle as parent.
        DispositionAngle        = 0
        IssueMoveAfterCreation  = No
        IgnoreAllObjects        = Yes
    End
    
    CreateObject
        ObjectNames             = GasthausGhanBuriGhan_Summoned
        Disposition             = RELATIVE_ANGLE USE_WATER_SURFACE    ; same angle as parent.
        DispositionAngle        = 0
        IssueMoveAfterCreation  = No
        IgnoreAllObjects        = Yes
    End
End

ObjectCreationList OCL_Outpost
    CreateObject
        ObjectNames             = ExpansionPlotFlag
        Disposition             = RELATIVE_ANGLE USE_WATER_SURFACE    ; same angle as parent.
        DispositionAngle        = 0
        IssueMoveAfterCreation  = No
        IgnoreAllObjects        = Yes
    End

    CreateObject
        ObjectNames             = GasthausGhanBuriGhan_Summoned
        Disposition             = RELATIVE_ANGLE USE_WATER_SURFACE    ; same angle as parent.
        DispositionAngle        = 0
        IssueMoveAfterCreation  = No
        IgnoreAllObjects        = Yes
    End
End

ObjectCreationList OCL_Camp
    CreateObject
        ObjectNames             = LagerPlotFlag
        Disposition             = RELATIVE_ANGLE USE_WATER_SURFACE    ; same angle as parent.
        DispositionAngle        = 0
        IssueMoveAfterCreation  = No
        IgnoreAllObjects        = Yes
    End

    CreateObject
        ObjectNames             = GasthausGhanBuriGhan_Summoned
        Disposition             = RELATIVE_ANGLE USE_WATER_SURFACE    ; same angle as parent.
        DispositionAngle        = 0
        IssueMoveAfterCreation  = No
        IgnoreAllObjects        = Yes
    End
End

ObjectCreationList OCL_Castle
    CreateObject
        ObjectNames             = CastleFlag
        Disposition             = RELATIVE_ANGLE USE_WATER_SURFACE    ; same angle as parent.
        DispositionAngle        = 0
        IssueMoveAfterCreation  = No
        IgnoreAllObjects        = Yes
    End

    CreateObject
        ObjectNames             = GasthausGhanBuriGhan_Summoned
        Disposition             = RELATIVE_ANGLE USE_WATER_SURFACE    ; same angle as parent.
        DispositionAngle        = 0
        IssueMoveAfterCreation  = No
        IgnoreAllObjects        = Yes
    End
End

ObjectCreationList OCL_TheTrees
    CreateObject
        ObjectNames                = ElvenWoodTreeSeed
        Count                    = 8
        SpreadFormation            = Yes
        MinDistanceAFormation    = 10.0
        MinDistanceBFormation    = 150.0
        MaxDistanceFormation    = 150.0
    End
    CreateObject
        ObjectNames                = ElvenWoodTreeSeed
        Count                    = 8
        SpreadFormation            = Yes
        MinDistanceAFormation    = 10.0
        MinDistanceBFormation    = 150.0
        MaxDistanceFormation    = 150.0
    End
    CreateObject
        ObjectNames                = ElvenWoodTreeSeed
        Count                    = 8
        SpreadFormation            = Yes
        MinDistanceAFormation    = 10.0
        MinDistanceBFormation    = 150.0
        MaxDistanceFormation    = 150.0
    End
    CreateObject
        ObjectNames                = ElvenWoodTreeSeed
        Count                    = 8
        SpreadFormation            = Yes
        MinDistanceAFormation    = 10.0
        MinDistanceBFormation    = 150.0
        MaxDistanceFormation    = 150.0
    End
    CreateObject
        ObjectNames                = ElvenWoodTreeSeed
        Count                    = 8
        SpreadFormation            = Yes
        MinDistanceAFormation    = 10.0
        MinDistanceBFormation    = 150.0
        MaxDistanceFormation    = 150.0
    End
    CreateObject
        ObjectNames                = ElvenWoodTreeSeed
        Count                    = 8
        SpreadFormation            = Yes
        MinDistanceAFormation    = 10.0
        MinDistanceBFormation    = 150.0
        MaxDistanceFormation    = 150.0
    End
End

ObjectCreationList OCL_QuickReload
    CreateObject
        ObjectNames = HackTestSpellReloadPing
        Count = 2
        Offset                          = X:0 Y:0 Z:0
        Disposition = RELATIVE_ANGLE
        DispositionAngle = 0
    End
End

ObjectCreationList OCL_SpawnHero
    CreateObject
        ObjectNames = TestHeroHacksReal
        Count = 1
        Offset                          = X:0 Y:0 Z:0
        Disposition = RELATIVE_ANGLE
        DispositionAngle = 0
        ForbiddenUpgrades = Upgrade_EasyAISinglePlayer Upgrade_EasyAIMultiPlayer Upgrade_MediumAISinglePlayer Upgrade_MediumAIMultiPlayer Upgrade_HardAISinglePlayer Upgrade_HardAIMultiPlayer Upgrade_BrutalAISinglePlayer Upgrade_BrutalAIMultiPlayer
    End
End

ObjectCreationList OCL_SpawnBilboTreasure_VERYYYY_Large
    CreateObject
        ObjectNames             = TreasureChestHeroHacks
        Count                   = 3
        SpreadFormation             = Yes
        MinDistanceAFormation           = 50.0
        MinDistanceBFormation           = 60.0
        MaxDistanceFormation            = 80.0
        FadeIn                  = No
        IgnoreAllObjects            = Yes
        InvulnerableTime            = 500   ; This is the amount of time before we can pick this crate up.
    End
End

ObjectCreationList OCL_SpawnBuilders
    CreateObject
        ObjectNames             = MenPorter_WOTR
        Count                   = 2
        SpreadFormation             = Yes
        MinDistanceAFormation           = 50.0
        MinDistanceBFormation           = 60.0
        MaxDistanceFormation            = 80.0
        FadeIn                  = No
        IgnoreAllObjects            = Yes
    End
    CreateObject
        ObjectNames             = RohanPorter_WOTR
        Count                   = 2
        SpreadFormation             = Yes
        MinDistanceAFormation           = 50.0
        MinDistanceBFormation           = 60.0
        MaxDistanceFormation            = 80.0
        FadeIn                  = No
        IgnoreAllObjects            = Yes
    End
    CreateObject
        ObjectNames             = ImladrisPorter_WOTR 
        Count                   = 2
        SpreadFormation             = Yes
        MinDistanceAFormation           = 50.0
        MinDistanceBFormation           = 60.0
        MaxDistanceFormation            = 80.0
        FadeIn                  = No
        IgnoreAllObjects            = Yes
    End
    CreateObject
        ObjectNames             =  DwarvenPorter_WOTR 
        Count                   = 2
        SpreadFormation             = Yes
        MinDistanceAFormation           = 50.0
        MinDistanceBFormation           = 60.0
        MaxDistanceFormation            = 80.0
        FadeIn                  = No
        IgnoreAllObjects            = Yes
    End
    CreateObject
        ObjectNames             =  IsengardPorter_WOTR 
        Count                   = 2
        SpreadFormation             = Yes
        MinDistanceAFormation           = 50.0
        MinDistanceBFormation           = 60.0
        MaxDistanceFormation            = 80.0
        FadeIn                  = No
        IgnoreAllObjects            = Yes
    End
    CreateObject
        ObjectNames             = MordorPorter_WOTR 
        Count                   = 2
        SpreadFormation             = Yes
        MinDistanceAFormation           = 50.0
        MinDistanceBFormation           = 60.0
        MaxDistanceFormation            = 80.0
        FadeIn                  = No
        IgnoreAllObjects            = Yes
    End
    CreateObject
        ObjectNames             =  WildTunnelgräber
        Count                   = 2
        SpreadFormation             = Yes
        MinDistanceAFormation           = 50.0
        MinDistanceBFormation           = 60.0
        MaxDistanceFormation            = 80.0
        FadeIn                  = No
        IgnoreAllObjects            = Yes
    End
    CreateObject
        ObjectNames             =  AngmarPorter_WOTR
        Count                   = 2
        SpreadFormation             = Yes
        MinDistanceAFormation           = 50.0
        MinDistanceBFormation           = 60.0
        MaxDistanceFormation            = 80.0
        FadeIn                  = No
        IgnoreAllObjects            = Yes
    End
    CreateObject
        ObjectNames             =  ElvenPorter_WOTR
        Count                   = 2
        SpreadFormation             = Yes
        MinDistanceAFormation           = 50.0
        MinDistanceBFormation           = 60.0
        MaxDistanceFormation            = 80.0
        FadeIn                  = No
        IgnoreAllObjects            = Yes
    End
End