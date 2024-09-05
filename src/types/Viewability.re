module Config = {
  [@deriving jsProperties]
  type t = {
    [@mel.optional]
    minimumViewTime: option(int),
    [@mel.optional]
    viewAreaCoveragePercentThreshold: option(float),
    [@mel.optional]
    itemVisiblePercentThreshold: option(float),
    [@mel.optional]
    waitForInteraction: option(bool),
  };
};

module ViewToken = {
  [@deriving jsProperties]
  type t('item, 'section) = {
    [@mel.optional]
    index: option(int),
    isViewable: bool,
    item: 'item,
    key: string,
    [@mel.optional]
    section: option('section),
  };
};
type callback('item, 'section) = {
  changed: array(ViewToken.t('item, 'section)),
  viewableItems: array(ViewToken.t('item, 'section)),
};
module ConfigCallbackPair = {
  type t('item, 'section) = {
    viewabilityConfig: Config.t,
    onViewableItemsChanged: callback('item, 'section) => unit,
  };
};
