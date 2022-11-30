import { Outlet} from 'react-router-dom';
import Button from 'react-bootstrap/Button';


const Layout = () =>{
    return <div>
        <nav>
            <ul>
               <Button variant="dark" href="/usuario">usuario</Button>{' '}
               
               <Button variant="outline-success" href="/login">login</Button>{' '}

               <Button variant="info" href="/venta">venta</Button>{' '}
               
            </ul>
        </nav>
        <hr />
        <Outlet />
    </div>;
}

export default Layout;



/*React hooks: investigar, dar enfasis a useState, useEffect, useContext, useRef*/