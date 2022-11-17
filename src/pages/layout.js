import { Outlet, Link } from 'react-router-dom';

const Layout = () =>{
    return <div>
        <nav>
            <ul>
                <li>
                    <Link to="/usuario">usuario</Link>
                </li>
                <li>
                    <Link to="/login">login</Link>
                </li>
                <li>
                    <Link to="/venta">venta</Link>
                </li>
            </ul>
        </nav>
        <hr />
        <Outlet />
    </div>;
}

export default Layout;