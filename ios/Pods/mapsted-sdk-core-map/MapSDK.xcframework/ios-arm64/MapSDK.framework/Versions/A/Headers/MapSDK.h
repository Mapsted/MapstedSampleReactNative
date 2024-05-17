/*
 * Copyright (c) 2016 CartoDB. All rights reserved.
 * Copying and using this code is allowed only according
 * to license terms, as given in https://cartodb.com/terms/
 */

#ifndef _CARTOMOBILESDK_H_
#define _CARTOMOBILESDK_H_

#define _CARTO_OFFLINE_SUPPORT
#define _CARTO_GEOCODING_SUPPORT
#define _CARTO_WKBT_SUPPORT
#define _CARTO_EDITABLE_SUPPORT
#define _CARTO_ROUTING_SUPPORT
#define _CARTO_PACKAGEMANAGER_SUPPORT
#define _CARTO_SERVICES_SUPPORT
#define _CARTO_LICENSEMANAGER_SUPPORT
#define _CARTO_SEARCH_SUPPORT

#import <MapSDK/NTOptions.h>
#import <MapSDK/NTLayers.h>

#ifdef _CARTO_GEOCODING_SUPPORT
#import <MapSDK/NTAddress.h>
#endif
#import <MapSDK/NTMapBounds.h>
#import <MapSDK/NTMapEnvelope.h>
#import <MapSDK/NTMapPos.h>
#import <MapSDK/NTScreenPos.h>
#import <MapSDK/NTScreenBounds.h>
#import <MapSDK/NTMapRange.h>
#import <MapSDK/NTMapTile.h>
#import <MapSDK/NTMapVec.h>
#import <MapSDK/NTTileData.h>
#import <MapSDK/NTVariant.h>
#import <MapSDK/NTVariantArrayBuilder.h>
#import <MapSDK/NTVariantObjectBuilder.h>

#import <MapSDK/NTAssetTileDataSource.h>
#import <MapSDK/NTCombinedTileDataSource.h>
#import <MapSDK/NTOrderedTileDataSource.h>
#import <MapSDK/NTMergedMBVTTileDataSource.h>
#import <MapSDK/NTBitmapOverlayRasterTileDataSource.h>
#import <MapSDK/NTGeoJSONVectorTileDataSource.h>
#import <MapSDK/NTHTTPTileDataSource.h>
#import <MapSDK/NTMemoryCacheTileDataSource.h>
#import <MapSDK/NTCartoOnlineTileDataSource.h>
#import <MapSDK/NTMapTilerOnlineTileDataSource.h>
#import <MapSDK/NTLocalVectorDataSource.h>
#import <MapSDK/NTTileDownloadListener.h>

#import <MapSDK/NTFeature.h>
#import <MapSDK/NTFeatureCollection.h>
#import <MapSDK/NTLineGeometry.h>
#import <MapSDK/NTPointGeometry.h>
#import <MapSDK/NTPolygonGeometry.h>
#import <MapSDK/NTMultiGeometry.h>
#import <MapSDK/NTMultiLineGeometry.h>
#import <MapSDK/NTMultiPointGeometry.h>
#import <MapSDK/NTMultiPolygonGeometry.h>
#import <MapSDK/NTGeometrySimplifier.h>
#import <MapSDK/NTDouglasPeuckerGeometrySimplifier.h>
#import <MapSDK/NTGeoJSONGeometryReader.h>
#import <MapSDK/NTGeoJSONGeometryWriter.h>

#import <MapSDK/NTBitmap.h>
#import <MapSDK/NTColor.h>
#import <MapSDK/NTViewState.h>

#import <MapSDK/NTSolidLayer.h>
#import <MapSDK/NTRasterTileEventListener.h>
#import <MapSDK/NTRasterTileLayer.h>
#import <MapSDK/NTHillshadeRasterTileLayer.h>
#import <MapSDK/NTTileLoadListener.h>
#import <MapSDK/NTUTFGridEventListener.h>
#import <MapSDK/NTVectorElementEventListener.h>
#import <MapSDK/NTVectorLayer.h>
#import <MapSDK/NTVectorTileEventListener.h>
#import <MapSDK/NTVectorTileLayer.h>
#import <MapSDK/NTTorqueTileLayer.h>
#import <MapSDK/NTClusteredVectorLayer.h>
#import <MapSDK/NTCartoOnlineRasterTileLayer.h>
#import <MapSDK/NTCartoOnlineVectorTileLayer.h>
#import <MapSDK/NTClusterElementBuilder.h>

#import <MapSDK/NTEPSG3857.h>
#import <MapSDK/NTEPSG4326.h>

#import <MapSDK/NTCullState.h>

#import <MapSDK/NTAnimationStyleBuilder.h>
#import <MapSDK/NTAnimationStyle.h>
#import <MapSDK/NTBalloonPopupStyleBuilder.h>
#import <MapSDK/NTBalloonPopupStyle.h>
#import <MapSDK/NTBalloonPopupButtonStyleBuilder.h>
#import <MapSDK/NTBalloonPopupButtonStyle.h>
#import <MapSDK/NTLabelStyleBuilder.h>
#import <MapSDK/NTLabelStyle.h>
#import <MapSDK/NTLineStyleBuilder.h>
#import <MapSDK/NTLineStyle.h>
#import <MapSDK/NTMarkerStyleBuilder.h>
#import <MapSDK/NTMarkerStyle.h>
#import <MapSDK/NTPointStyleBuilder.h>
#import <MapSDK/NTPointStyle.h>
#import <MapSDK/NTPolygon3DStyleBuilder.h>
#import <MapSDK/NTPolygon3DStyle.h>
#import <MapSDK/NTPolygonStyleBuilder.h>
#import <MapSDK/NTPolygonStyle.h>
#import <MapSDK/NTPopupStyleBuilder.h>
#import <MapSDK/NTPopupStyle.h>
#import <MapSDK/NTTextStyleBuilder.h>
#import <MapSDK/NTTextStyle.h>
#import <MapSDK/NTNMLModelStyleBuilder.h>
#import <MapSDK/NTNMLModelStyle.h>
#import <MapSDK/NTGeometryCollectionStyle.h>
#import <MapSDK/NTGeometryCollectionStyleBuilder.h>

#import <MapSDK/NTMapRenderer.h>
#import <MapSDK/NTMapRendererListener.h>
#import <MapSDK/NTRendererCaptureListener.h>

#import <MapSDK/NTMapView.h>
#import <MapSDK/NTClickInfo.h>
#import <MapSDK/NTMapClickInfo.h>
#import <MapSDK/NTMapInteractionInfo.h>
#import <MapSDK/NTMapEventListener.h>
#import <MapSDK/NTBalloonPopupButtonClickInfo.h>
#import <MapSDK/NTRasterTileClickInfo.h>
#import <MapSDK/NTVectorTileClickInfo.h>
#import <MapSDK/NTVectorElementClickInfo.h>

#import <MapSDK/NTAssetUtils.h>
#import <MapSDK/NTBitmapUtils.h>
#import <MapSDK/NTTileUtils.h>
#import <MapSDK/NTLog.h>
#import <MapSDK/NTLogEventListener.h>
#import <MapSDK/NTExceptionWrapper.h>

#import <MapSDK/NTBalloonPopup.h>
#import <MapSDK/NTBalloonPopupButton.h>
#import <MapSDK/NTBalloonPopupEventListener.h>
#import <MapSDK/NTCustomPopup.h>
#import <MapSDK/NTCustomPopupHandler.h>
#import <MapSDK/NTGeometryCollection.h>
#import <MapSDK/NTLabel.h>
#import <MapSDK/NTLine.h>
#import <MapSDK/NTMarker.h>
#import <MapSDK/NTNMLModel.h>
#import <MapSDK/NTPoint.h>
#import <MapSDK/NTPolygon3D.h>
#import <MapSDK/NTPolygon.h>
#import <MapSDK/NTPopup.h>
#import <MapSDK/NTText.h>

#import <MapSDK/NTAssetPackage.h>
#import <MapSDK/NTZippedAssetPackage.h>
#import <MapSDK/NTCompiledStyleSet.h>
#import <MapSDK/NTCartoCSSStyleSet.h>
#import <MapSDK/NTVectorTileDecoder.h>
#import <MapSDK/NTCartoVectorTileDecoder.h>
#import <MapSDK/NTMBVectorTileDecoder.h>
#import <MapSDK/NTTorqueTileDecoder.h>
#import <MapSDK/NTVectorTileFeature.h>
#import <MapSDK/NTVectorTileFeatureCollection.h>

#import <MapSDK/NTCartoMapsService.h>
#import <MapSDK/NTCartoSQLService.h>

#ifdef _CARTO_OFFLINE_SUPPORT
#import <MapSDK/NTMBTilesTileDataSource.h>
#import <MapSDK/NTPersistentCacheTileDataSource.h>
#endif

#ifdef _CARTO_PACKAGEMANAGER_SUPPORT
#import <MapSDK/NTPackageManagerTileDataSource.h>

#ifdef _CARTO_ROUTING_SUPPORT
#import <MapSDK/NTPackageManagerRoutingService.h>
#ifdef _CARTO_VALHALLA_ROUTING_SUPPORT
#import <MapSDK/NTPackageManagerValhallaRoutingService.h>
#endif
#endif

#import <MapSDK/NTPackageInfo.h>
#import <MapSDK/NTPackageStatus.h>
#import <MapSDK/NTPackageTileMask.h>
#import <MapSDK/NTPackageManager.h>
#import <MapSDK/NTCartoPackageManager.h>

#import <MapSDK/NTCartoOfflineVectorTileLayer.h>
#endif

#ifdef _CARTO_GEOCODING_SUPPORT
#import <MapSDK/NTGeocodingAddress.h>
#import <MapSDK/NTGeocodingRequest.h>
#import <MapSDK/NTGeocodingResult.h>
#import <MapSDK/NTReverseGeocodingRequest.h>
#import <MapSDK/NTGeocodingService.h>
#import <MapSDK/NTReverseGeocodingService.h>
#import <MapSDK/NTPackageManagerGeocodingService.h>
#import <MapSDK/NTPackageManagerReverseGeocodingService.h>
#import <MapSDK/NTOSMOfflineGeocodingService.h>
#import <MapSDK/NTOSMOfflineReverseGeocodingService.h>
#import <MapSDK/NTPeliasOnlineGeocodingService.h>
#import <MapSDK/NTPeliasOnlineReverseGeocodingService.h>
#import <MapSDK/NTMapBoxOnlineGeocodingService.h>
#import <MapSDK/NTMapBoxOnlineReverseGeocodingService.h>
#import <MapSDK/NTTomTomOnlineGeocodingService.h>
#import <MapSDK/NTTomTomOnlineReverseGeocodingService.h>
#endif

#ifdef _CARTO_SEARCH_SUPPORT
#import <MapSDK/NTSearchRequest.h>
#import <MapSDK/NTFeatureCollectionSearchService.h>
#import <MapSDK/NTVectorElementSearchService.h>
#import <MapSDK/NTVectorTileSearchService.h>
#endif

#ifdef _CARTO_ROUTING_SUPPORT
#import <MapSDK/NTRoutingInstruction.h>
#import <MapSDK/NTRoutingRequest.h>
#import <MapSDK/NTRoutingResult.h>
#import <MapSDK/NTRoutingService.h>
#import <MapSDK/NTRouteMatchingRequest.h>
#import <MapSDK/NTRouteMatchingResult.h>
#import <MapSDK/NTOSRMOfflineRoutingService.h>
#import <MapSDK/NTSGREOfflineRoutingService.h>
#import <MapSDK/NTCartoOnlineRoutingService.h>
#import <MapSDK/NTValhallaOnlineRoutingService.h>
#ifdef _CARTO_VALHALLA_ROUTING_SUPPORT
#import <MapSDK/NTValhallaOfflineRoutingService.h>
#endif
#endif

#ifdef _CARTO_NMLMODELLODTREE_SUPPORT
#import <MapSDK/NTOnlineNMLModelLODTreeDataSource.h>
#import <MapSDK/NTOfflineNMLModelLODTreeDataSource.h>
#import <MapSDK/NTNMLModelLODTreeLayer.h>
#endif

#ifdef _CARTO_EDITABLE_SUPPORT
#import <MapSDK/NTEditableVectorLayer.h>
#import <MapSDK/NTVectorEditEventListener.h>
#endif

#ifdef _CARTO_WKBT_SUPPORT
#import <MapSDK/NTWKTGeometryReader.h>
#import <MapSDK/NTWKTGeometryWriter.h>
#import <MapSDK/NTWKBGeometryReader.h>
#import <MapSDK/NTWKBGeometryWriter.h>
#endif

#ifdef _CARTO_GDAL_SUPPORT
#import <MapSDK/NTOGRVectorDataSource.h>
#import <MapSDK/NTGDALRasterTileDataSource.h>
#import <MapSDK/NTStyleSelector.h>
#import <MapSDK/NTStyleSelectorBuilder.h>
#endif

#endif
