type requestID;


external request: (unit => unit) => requestID = "requestAnimationFrame";
 external cancel: requestID => unit = "cancelAnimationFrame";
