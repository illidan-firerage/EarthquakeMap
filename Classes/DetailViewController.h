#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "Earthquake.h"

@interface DetailViewController : UIViewController <UIPopoverControllerDelegate, UISplitViewControllerDelegate, MKMapViewDelegate> {
    
    UIPopoverController *popoverController;
    UIToolbar *toolbar;
    
    Earthquake *detailItem;
	
	IBOutlet MKMapView *mapView;
	
}

@property (nonatomic, retain) IBOutlet UIToolbar *toolbar;
@property (nonatomic, retain) Earthquake *detailItem;

- (void) loadAllEarthQuakes:(NSArray *) earthquakeList;

@end
